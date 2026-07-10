// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.


#include "NotionScreenshotTaker.h"
#include "NotionSettings.h"
#include "NotionUnrealBPLibrary.h"

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


	const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();
	const int64 MaxBytes = (int64)NotionSettings->MaxUploadSizeMB * 1024 * 1024;

	// Step the JPEG quality down until the image fits under the upload size limit
	TArray64<uint8> CompressedImage;
	for (const int32 Quality : { 70, 50, 30 })
	{
		CompressedImage = ImageWrapper->GetCompressed(Quality);
		if (MaxBytes <= 0 || CompressedImage.Num() <= MaxBytes)
		{
			break;
		}
	}
	if (MaxBytes > 0 && CompressedImage.Num() > MaxBytes)
	{
		UE_LOG(LogTemp, Warning, TEXT("Screenshot exceeds MaxUploadSizeMB (%d MB) even at lowest quality, upload will likely be rejected."), NotionSettings->MaxUploadSizeMB);
	}

	TArray<uint8> CompressedImageData = TArray<uint8>(CompressedImage.GetData(), (int32)CompressedImage.Num());

	GEngine->GameViewport->OnScreenshotCaptured().RemoveAll(this);
	bIsScreenshotRequested = false;

	FString File;
	FString time = FDateTime::Now().ToString().Replace(TEXT("."), TEXT("-"), ESearchCase::IgnoreCase);
	File.Append("screenshot_" + time + ".jpg");

	TWeakObjectPtr<UNotionScreenshotTaker> WeakThis(this);
	UNotionUnrealBPLibrary::UploadFileToNotion(File, TEXT("image/jpeg"), MoveTemp(CompressedImageData),
		[WeakThis](int32 Status, const FString& ResponseString, const FString& FileUploadId) {
			if (WeakThis.IsValid())
			{
				WeakThis->ScreenshotUploaded.Broadcast(Status, ResponseString, FileUploadId);
			}
		});
}
