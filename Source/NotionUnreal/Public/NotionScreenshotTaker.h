// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#pragma once

#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NotionScreenshotTaker.generated.h"

/**
 * 
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenshotJpeg, const TArray<uint8>&, Jpeg);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FScreenshotResponse, uint8, Status, FString, ResponseString, FString, FileURL);

UCLASS(BlueprintType, Blueprintable)
class NOTIONUNREAL_API UNotionScreenshotTaker : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Screenshot)
		virtual void RequestScreenshot();

	UPROPERTY(BlueprintAssignable, Category = Screenshot)
		FScreenshotResponse ScreenshotUploaded;
protected:
		virtual void ScreenshotReceived(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);

	bool bIsScreenshotRequested;
	
};
