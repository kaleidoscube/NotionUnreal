// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.


#include "NotionScreenshotTaker.h"
#include "NotionSettings.h"

#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "UnrealClient.h"
#include "Modules/ModuleManager.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"

void UNotionScreenshotTaker::RequestScreenshot()
{
	if (GEngine == nullptr || GEngine->GameViewport == nullptr || bIsScreenshotRequested)
	{
		return;
	}

	bIsScreenshotRequested = true;
	GEngine->GameViewport->OnScreenshotCaptured().AddUObject(this, &UNotionScreenshotTaker::ScreenshotReceived);

	FScreenshotRequest::RequestScreenshot(false);
}

void UNotionScreenshotTaker::ScreenshotReceived(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData)
{
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);

	if (!ImageWrapper.IsValid())
	{
		bIsScreenshotRequested = false;
		return;
	}

	if (!ImageWrapper->SetRaw(&InImageData[0], InImageData.Num() * sizeof(FColor), InSizeX, InSizeY, ERGBFormat::BGRA, 8))
	{
		bIsScreenshotRequested = false;
		return;
	}


	TArray64<uint8> CompressedImage = ImageWrapper->GetCompressed(70);
	CompressedImage.Shrink();
	TArray<uint8> CompressedImageDummy = TArray<uint8>(CompressedImage.GetData(), CompressedImage.GetAllocatedSize());

	GEngine->GameViewport->OnScreenshotCaptured().RemoveAll(this);
	bIsScreenshotRequested = false;

	FString File;
	FString time = FDateTime::Now().ToString().Replace(TEXT("."), TEXT("-"), ESearchCase::IgnoreCase);
	File.Append("screenshot_" + time + ".png");


	FHttpModule& HttpModule = FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> httpRequest = HttpModule.CreateRequest();

	const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();

	httpRequest->SetVerb(TEXT("PUT"));

	httpRequest->SetURL(NotionSettings->fileHostUploadUrl + "/notionScreenshots/" + File);

	for (auto& Elem : NotionSettings->fileHostUploadHeaders)
	{
		httpRequest->AppendToHeader(Elem.Key, Elem.Value);
	}

	httpRequest->SetContent(CompressedImageDummy);

		httpRequest->OnProcessRequestComplete().BindLambda(
		[this, File](
			FHttpRequestPtr Request,
			FHttpResponsePtr Response,
			bool ConnectedSuccessfully) mutable {
				ScreenshotUploaded.Broadcast(Response->GetResponseCode(), Response->GetContentAsString(), "/notionScreenshots/" + File);
		});

	// Send the request 
	httpRequest->ProcessRequest();

}
