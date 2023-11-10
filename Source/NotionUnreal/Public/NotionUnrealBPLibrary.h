// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#pragma once
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NotionUnrealBPLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FResponse, uint8, Status, FString, ResponseString);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FLogResponse, uint8, Status, FString, ResponseString, FString, FileURL);

UCLASS()
class UNotionUnrealBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Make a Notion Task", Keywords = "Make a Notion Task"), Category = "Notion Plugin Internal")
	static void CreateTaskInNotion(const FString Properties, const FString ContentChildren, const FResponse &OnComplete);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Upload Log", Keywords = "Get Game Log"), Category = "Notion Plugin Internal")
	static void UploadLog(const FLogResponse& OnComplete);

};
