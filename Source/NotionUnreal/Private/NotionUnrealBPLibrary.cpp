// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#include "NotionUnrealBPLibrary.h"
#include "NotionSettings.h"
#include "GenericPlatform/GenericPlatformOutputDevices.h"
#include "Misc/OutputDeviceFile.h"

#include "NotionUnreal.h"

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
    httpRequest->AppendToHeader(TEXT("Notion-Version"), TEXT("2021-08-16"));

    FString RequestContent = "{\"parent\": { \"database_id\": \"" + NotionSettings->notionDatabaseID + "\" }, \"properties\": {" + Properties + "}, \"children\": [" + ContentChildren + "]}";
   
    httpRequest->SetContentAsString(RequestContent);

    // Callback will execute when the HTTP call is complete
    httpRequest->OnProcessRequestComplete().BindLambda(
        [&, OnComplete](
            FHttpRequestPtr Request,
            FHttpResponsePtr Response,
            bool ConnectedSuccessfully) mutable {
            OnComplete.ExecuteIfBound(Response->GetResponseCode(), Response->GetContentAsString());
        });

    // Set Timeout
    httpRequest->SetTimeout(20);

    // Submit the request
    httpRequest->ProcessRequest();
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

            const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();

            FHttpModule& httpModule = FHttpModule::Get();

            // Create an asynchronous http request
            TSharedRef<IHttpRequest, ESPMode::ThreadSafe> httpRequest = httpModule.CreateRequest();

            httpRequest->SetVerb(TEXT("PUT"));

            FString FileName;
            FString time = FDateTime::Now().ToString().Replace(TEXT("."), TEXT("-"), ESearchCase::IgnoreCase);
            FileName.Append("log_" + time + ".log");

            httpRequest->SetURL(NotionSettings->fileHostUploadUrl + "/notionLogs/" + FileName);

            for (auto& Elem : NotionSettings->fileHostUploadHeaders)
            {
                httpRequest->AppendToHeader(Elem.Key, Elem.Value);
            }

            TArray<uint8> FileRawData;
            
            FFileHelper::LoadFileToArray(FileRawData, *File, FILEREAD_AllowWrite);
            
            httpRequest->SetContent(FileRawData);

            // Callback will execute when the HTTP call is complete
            httpRequest->OnProcessRequestComplete().BindLambda(
                [&, OnComplete, FileName](
                    FHttpRequestPtr Request,
                    FHttpResponsePtr Response,
                    bool ConnectedSuccessfully) mutable {
                        OnComplete.ExecuteIfBound(Response->GetResponseCode(), Response->GetContentAsString(), "/notionLogs/" + FileName);
                });

            //Set Timeout
            httpRequest->SetTimeout(20);

            // Submit the request
            httpRequest->ProcessRequest();
            

        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("File ERROR: Can not read the file because it was not found."));
            UE_LOG(LogTemp, Warning, TEXT("File: Expected file location: %s"), *File);
        }

    }
#endif  
}
