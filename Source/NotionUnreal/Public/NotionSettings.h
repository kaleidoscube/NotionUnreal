// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#pragma once
#include "Engine/DeveloperSettings.h"
#include "CoreMinimal.h"
#include "HttpModule.h"
#include "InputCoreTypes.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Styling/SlateTypes.h"
#include "Dom/JsonObject.h"

#include "NotionSettings.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ENotionPropertyType : uint8{
	Checkbox,
	Email,
	Multi_Select,
	Number,
	People,
	Phone_Number,
	Rich_Text,
	Select,
	Status,
	Url,
	Date
};


UENUM(BlueprintType)
enum class ENotionScreenPosition : uint8 {
	TopLeft,
	Top,
	TopRight,
	Right,
	BottomRight,
	Bottom,
	BottomLeft,
	Left
};


USTRUCT(BlueprintType)
struct FNotionUser
{
	GENERATED_BODY()

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString Name;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString ID;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties)
		bool isVisibleInUI = true;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties)
		bool isDefault = false;
};

USTRUCT(BlueprintType)
struct FNotionSelection
{
	GENERATED_BODY()

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString Name;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString ID;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FColor Color = FColor(0, 0, 0);
};


USTRUCT(BlueprintType)
struct FNotionProperty
{
	GENERATED_BODY()

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString Name;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString ID;

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = DatabaseProperties)
		bool isVisibleInUI = true;

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = DatabaseProperties, meta = (EditCondition = false))
		ENotionPropertyType PropertyType = ENotionPropertyType::Checkbox;

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = DatabaseProperties, meta = (EditCondition = false))
		TArray<FNotionSelection> Options;

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = DatabaseProperties, meta = (EditCondition = "PropertyType==ENotionPropertyType::Checkbox", EditConditionHides))
		bool DefaultCheckboxState = false;

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = DatabaseProperties, meta = (EditCondition = "PropertyType==ENotionPropertyType::Email || PropertyType==ENotionPropertyType::Phone_Number  || PropertyType==ENotionPropertyType::Rich_Text || PropertyType==ENotionPropertyType::Url || PropertyType==ENotionPropertyType::Number", EditConditionHides))
		FString DefaultContent = "";

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = DatabaseProperties, meta = (EditCondition = "PropertyType==ENotionPropertyType::Multi_Select", EditConditionHides))
		TArray<FString> DefaultOptionNames;

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = DatabaseProperties, meta = (EditCondition = "PropertyType==ENotionPropertyType::Select || PropertyType==ENotionPropertyType::Status", EditConditionHides))
		FString DefaultOptionName = "";
};


USTRUCT()
struct FNotionKeyInfo
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Input")
		FKey Key = FKey("T");

	UPROPERTY(EditAnywhere, Category = "Input")
		ECheckBoxState Shift = ECheckBoxState::Undetermined;

	UPROPERTY(EditAnywhere, Category = "Input")
		ECheckBoxState Ctrl = ECheckBoxState::Checked;

	UPROPERTY(EditAnywhere, Category = "Input")
		ECheckBoxState Alt = ECheckBoxState::Undetermined;

	UPROPERTY(EditAnywhere, Category = "Input")
		ECheckBoxState Cmd = ECheckBoxState::Undetermined;

	friend bool operator==(const FNotionKeyInfo& Lhs, const FNotionKeyInfo& Rhs)
	{
		return Lhs.Key == Rhs.Key
			&& Lhs.Shift == Rhs.Shift
			&& Lhs.Ctrl == Rhs.Ctrl
			&& Lhs.Alt == Rhs.Alt
			&& Lhs.Cmd == Rhs.Cmd;
	}

	friend bool operator!=(const FNotionKeyInfo& Lhs, const FNotionKeyInfo& Rhs)
	{
		return !(Lhs == Rhs);
	}
};

USTRUCT(BlueprintType)
struct FNotionConnection
{
	GENERATED_BODY()

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Connections")
	FString notionAPIKey;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Connections")
	FString notionDatabaseID;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Connections", meta = (EditCondition = false))
	FString DatabaseName;
};

// Prueba de notion

UCLASS(config = Notion, defaultconfig, meta = (DisplayName = "Notion Integration"))
class NOTIONUNREAL_API UNotionSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UNotionSettings(const FObjectInitializer& ObjectInitializer);

	// mapeo de conexiones a bases de datos 
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Connections")
	TMap<FString, FNotionConnection> DatabaseConnections;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = NotionAuthentication)
		FString notionAPIKey;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = NotionAuthentication)
		FString notionDatabaseID;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString DatabaseName;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties, meta = (EditCondition = false))
		FString TaskNameProperty;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = DatabaseProperties)
		TMap<FString, FNotionProperty> DatabaseProperties;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = Users)
		TMap<FString, FNotionUser> DatabaseUsers;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = Settings)
		bool SendLog;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = Settings)
		ENotionScreenPosition InGameWindowPosition = ENotionScreenPosition::BottomLeft;

	UPROPERTY(Config, EditAnywhere, Category = Settings)
		FNotionKeyInfo InGameShortcut;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = PaintMode)
		bool EnablePaintMode = true;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = PaintMode)
		TArray<FColor> Colors = { FColor(255,255,255,255), FColor(0,0,0,255), FColor(255,0,0,255), FColor(0,0,255,255), FColor(255,255,0,255) };

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = FileHostingCUrlAuth)
		FString fileHostUploadUrl = "https://storage.bunnycdn.com/YOURSTORAGE/";

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = FileHostingCUrlAuth)
		TMap<FString, FString> fileHostUploadHeaders;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = FileHostingCUrlAuth)
		FString filePublicParentUrl = "https://YOURSTORAGE.b-cdn.net";


	void RetrieveDatabase();
	void RetrieveUsers();

	FNotionProperty PropDataToEnumObject(TSharedPtr<FJsonObject> PropData);

	FColor NameToNotionColor(FString name);

	void OnDatabaseRetrieved(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnUsersRetrieved(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};


