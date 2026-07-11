// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#include "NotionUnrealBPLibrary.h"
#include "NotionSettings.h"
#include "GenericPlatform/GenericPlatformOutputDevices.h"
#include "Misc/Compression.h"
#include "Misc/OutputDeviceFile.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

#include "NotionUnreal.h"

static TArray<uint8> GzipCompress(const TArray<uint8>& Uncompressed)
{
    TArray<uint8> Compressed;
    int32 CompressedSize = FCompression::CompressMemoryBound(NAME_Gzip, Uncompressed.Num());
    Compressed.SetNumUninitialized(CompressedSize);
    if (FCompression::CompressMemory(NAME_Gzip, Compressed.GetData(), CompressedSize, Uncompressed.GetData(), Uncompressed.Num()))
    {
        Compressed.SetNum(CompressedSize);
    }
    else
    {
        Compressed.Empty();
    }
    return Compressed;
}

UNotionUnrealBPLibrary::UNotionUnrealBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


void UNotionUnrealBPLibrary::CreateTaskInNotion(const FString Properties, const FString ContentChildren, const FResponse &OnComplete)
{
    const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();

    FHttpModule& httpModule = FHttpModule::Get();

    // Create an asynchronous http request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> httpRequest = httpModule.CreateRequest();

    httpRequest->SetVerb(TEXT("POST"));

    httpRequest->SetURL("https://api.notion.com/v1/pages");

    httpRequest->AppendToHeader(TEXT("Authorization"), TEXT("Bearer " + NotionSettings->notionAPIKey));
    httpRequest->AppendToHeader(TEXT("Content-Type"), TEXT("application/json"));
    httpRequest->AppendToHeader(TEXT("Notion-Version"), TEXT("2022-06-28"));

    FString RequestContent = "{\"parent\": { \"database_id\": \"" + NotionSettings->notionDatabaseID + "\" }, \"properties\": {" + Properties + "}, \"children\": [" + ContentChildren + "]}";

    httpRequest->SetContentAsString(RequestContent);

    // Callback will execute when the HTTP call is complete
    httpRequest->OnProcessRequestComplete().BindLambda(
        [&, OnComplete, RequestContent](
            FHttpRequestPtr Request,
            FHttpResponsePtr Response,
            bool ConnectedSuccessfully) mutable {
            if (!Response.IsValid())
            {
                OnComplete.ExecuteIfBound(0, TEXT("Connection to Notion failed"));
                return;
            }
            if (Response->GetResponseCode() != 200)
            {
                UE_LOG(LogTemp, Warning, TEXT("Notion: create task failed (%d). Request body: %s"), Response->GetResponseCode(), *RequestContent);
                UE_LOG(LogTemp, Warning, TEXT("Notion: create task response: %s"), *Response->GetContentAsString());
            }
            OnComplete.ExecuteIfBound(Response->GetResponseCode(), Response->GetContentAsString());
        });

    // Set Timeout
    httpRequest->SetTimeout(20);

    // Submit the request
    httpRequest->ProcessRequest();
}

void UNotionUnrealBPLibrary::UploadFileToNotion(const FString& Filename, const FString& ContentType, TArray<uint8> Data, TFunction<void(int32 Status, const FString& Response, const FString& FileUploadId)> OnDone)
{
    const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();

    FHttpModule& httpModule = FHttpModule::Get();

    // Step 1: create the file upload object to get an id and upload_url
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> createRequest = httpModule.CreateRequest();

    createRequest->SetVerb(TEXT("POST"));
    createRequest->SetURL("https://api.notion.com/v1/file_uploads");
    createRequest->AppendToHeader(TEXT("Authorization"), TEXT("Bearer " + NotionSettings->notionAPIKey));
    createRequest->AppendToHeader(TEXT("Content-Type"), TEXT("application/json"));
    createRequest->AppendToHeader(TEXT("Notion-Version"), TEXT("2022-06-28"));

    createRequest->SetContentAsString("{\"filename\": \"" + Filename + "\", \"content_type\": \"" + ContentType + "\"}");

    createRequest->OnProcessRequestComplete().BindLambda(
        [Filename, ContentType, Data = MoveTemp(Data), OnDone](
            FHttpRequestPtr Request,
            FHttpResponsePtr Response,
            bool ConnectedSuccessfully) mutable {

            if (!Response.IsValid())
            {
                OnDone(0, TEXT("Connection to Notion failed"), TEXT(""));
                return;
            }

            FString UploadId;
            FString UploadUrl;
            TSharedPtr<FJsonObject> ResponseJson;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

            if (Response->GetResponseCode() != 200
                || !FJsonSerializer::Deserialize(Reader, ResponseJson) || !ResponseJson.IsValid()
                || !ResponseJson->TryGetStringField(TEXT("id"), UploadId)
                || !ResponseJson->TryGetStringField(TEXT("upload_url"), UploadUrl))
            {
                UE_LOG(LogTemp, Warning, TEXT("Notion: create file upload for '%s' failed (%d): %s"), *Filename, Response->GetResponseCode(), *Response->GetContentAsString());
                OnDone(Response->GetResponseCode(), Response->GetContentAsString(), TEXT(""));
                return;
            }

            // Step 2: send the file contents to the upload_url as multipart/form-data
            const FString Boundary = "NotionUnrealBoundary" + FGuid::NewGuid().ToString(EGuidFormats::Digits);
            const FString PartHeader = "--" + Boundary + "\r\nContent-Disposition: form-data; name=\"file\"; filename=\"" + Filename + "\"\r\nContent-Type: " + ContentType + "\r\n\r\n";
            const FString PartFooter = "\r\n--" + Boundary + "--\r\n";

            FTCHARToUTF8 HeaderUtf8(*PartHeader);
            FTCHARToUTF8 FooterUtf8(*PartFooter);

            TArray<uint8> Body;
            Body.Reserve(HeaderUtf8.Length() + Data.Num() + FooterUtf8.Length());
            Body.Append((const uint8*)HeaderUtf8.Get(), HeaderUtf8.Length());
            Body.Append(Data);
            Body.Append((const uint8*)FooterUtf8.Get(), FooterUtf8.Length());

            const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();

            FHttpModule& httpModule = FHttpModule::Get();
            TSharedRef<IHttpRequest, ESPMode::ThreadSafe> sendRequest = httpModule.CreateRequest();

            sendRequest->SetVerb(TEXT("POST"));
            sendRequest->SetURL(UploadUrl);
            // The upload_url is a Notion API endpoint that rejects the request with a 401
            // unless the bearer token is present. Only skip the auth headers if Notion ever
            // hands back a presigned storage URL on another host, which validates on its own.
            if (UploadUrl.StartsWith(TEXT("https://api.notion.com/")))
            {
                sendRequest->AppendToHeader(TEXT("Authorization"), TEXT("Bearer " + NotionSettings->notionAPIKey));
                sendRequest->AppendToHeader(TEXT("Notion-Version"), TEXT("2022-06-28"));
            }
            sendRequest->AppendToHeader(TEXT("Content-Type"), TEXT("multipart/form-data; boundary=" + Boundary));

            sendRequest->SetContent(MoveTemp(Body));

            sendRequest->OnProcessRequestComplete().BindLambda(
                [UploadId, Filename, OnDone](
                    FHttpRequestPtr Request,
                    FHttpResponsePtr Response,
                    bool ConnectedSuccessfully) mutable {

                    if (!Response.IsValid())
                    {
                        OnDone(0, TEXT("Connection to Notion failed"), TEXT(""));
                        return;
                    }

                    const bool bSuccess = Response->GetResponseCode() == 200;
                    if (bSuccess)
                    {
                        UE_LOG(LogTemp, Display, TEXT("Notion: uploaded '%s' as file upload %s"), *Filename, *UploadId);
                    }
                    else
                    {
                        UE_LOG(LogTemp, Warning, TEXT("Notion: sending contents of '%s' failed (%d): %s"), *Filename, Response->GetResponseCode(), *Response->GetContentAsString().Left(500));
                    }
                    OnDone(Response->GetResponseCode(), Response->GetContentAsString(), bSuccess ? UploadId : TEXT(""));
                });

            sendRequest->SetTimeout(60);
            sendRequest->ProcessRequest();
        });

    createRequest->SetTimeout(20);
    createRequest->ProcessRequest();
}

void UNotionUnrealBPLibrary::UploadLog(const FLogResponse& OnComplete) {
#if PLATFORM_WINDOWS
    FString LogFileName;
    FString Log;

    FOutputDevice* OutputDevice = FGenericPlatformOutputDevices::GetLog();
    if (OutputDevice != nullptr)
    {
        FOutputDeviceFile* OutputDeviceFile = static_cast<FOutputDeviceFile*>(OutputDevice);

        LogFileName = OutputDeviceFile->GetFilename();
        int endName = LogFileName.Find("/", ESearchCase::IgnoreCase, ESearchDir::FromEnd);
        LogFileName = LogFileName.RightChop(endName);

        FString File = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir());
        File.Append("Logs");
        File.Append(LogFileName);

        if (IFileManager::Get().FileExists(*File))
        {

            UE_LOG(LogTemp, Warning, TEXT("Reading: %s"), *File);

            FString time = FDateTime::Now().ToString().Replace(TEXT("."), TEXT("-"), ESearchCase::IgnoreCase);

            TArray<uint8> FileRawData;

            FFileHelper::LoadFileToArray(FileRawData, *File, FILEREAD_AllowWrite);

            const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();
            const int64 MaxBytes = (int64)NotionSettings->MaxUploadSizeMB * 1024 * 1024;

            // Cloudflare's WAF in front of api.notion.com rejects multipart bodies containing
            // raw log text (403 block page), so the log is shipped gzipped as opaque binary.
            TArray<uint8> Compressed = GzipCompress(FileRawData);

            while (MaxBytes > 0 && Compressed.Num() > MaxBytes && FileRawData.Num() > 64 * 1024)
            {
                const FString TruncationNote = TEXT("[Log truncated - showing most recent output]\r\n");
                FTCHARToUTF8 NoteUtf8(*TruncationNote);
                const int32 KeepBytes = FileRawData.Num() / 2;

                TArray<uint8> Truncated;
                Truncated.Reserve(NoteUtf8.Length() + KeepBytes);
                Truncated.Append((const uint8*)NoteUtf8.Get(), NoteUtf8.Length());
                Truncated.Append(FileRawData.GetData() + (FileRawData.Num() - KeepBytes), KeepBytes);
                FileRawData = MoveTemp(Truncated);

                Compressed = GzipCompress(FileRawData);
                UE_LOG(LogTemp, Warning, TEXT("Compressed log exceeds MaxUploadSizeMB (%d MB), retrying with truncated tail."), NotionSettings->MaxUploadSizeMB);
            }

            if (Compressed.Num() > 0)
            {
                UploadFileToNotion("log_" + time + ".txt.gz", TEXT("application/gzip"), MoveTemp(Compressed),
                    [OnComplete](int32 Status, const FString& ResponseString, const FString& FileUploadId) {
                        OnComplete.ExecuteIfBound(Status, ResponseString, FileUploadId);
                    });
            }
            else
            {
                // Compression failed; upload the raw text as a best effort
                UploadFileToNotion("log_" + time + ".txt", TEXT("text/plain"), MoveTemp(FileRawData),
                    [OnComplete](int32 Status, const FString& ResponseString, const FString& FileUploadId) {
                        OnComplete.ExecuteIfBound(Status, ResponseString, FileUploadId);
                    });
            }

        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("File ERROR: Can not read the file because it was not found."));
            UE_LOG(LogTemp, Warning, TEXT("File: Expected file location: %s"), *File);
        }

    }
#endif
}
