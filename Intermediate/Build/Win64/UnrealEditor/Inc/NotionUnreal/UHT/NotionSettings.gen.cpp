// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnreal/Public/NotionSettings.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionSettings();
	NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionSettings_NoRegister();
	NOTIONUNREAL_API UEnum* Z_Construct_UEnum_NotionUnreal_ENotionPropertyType();
	NOTIONUNREAL_API UEnum* Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition();
	NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionConnection();
	NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionKeyInfo();
	NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionProperty();
	NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionSelection();
	NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionUser();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UPackage* Z_Construct_UPackage__Script_NotionUnreal();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENotionPropertyType;
	static UEnum* ENotionPropertyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENotionPropertyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENotionPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NotionUnreal_ENotionPropertyType, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("ENotionPropertyType"));
		}
		return Z_Registration_Info_UEnum_ENotionPropertyType.OuterSingleton;
	}
	template<> NOTIONUNREAL_API UEnum* StaticEnum<ENotionPropertyType>()
	{
		return ENotionPropertyType_StaticEnum();
	}
	struct Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enumerators[] = {
		{ "ENotionPropertyType::Checkbox", (int64)ENotionPropertyType::Checkbox },
		{ "ENotionPropertyType::Email", (int64)ENotionPropertyType::Email },
		{ "ENotionPropertyType::Multi_Select", (int64)ENotionPropertyType::Multi_Select },
		{ "ENotionPropertyType::Number", (int64)ENotionPropertyType::Number },
		{ "ENotionPropertyType::People", (int64)ENotionPropertyType::People },
		{ "ENotionPropertyType::Phone_Number", (int64)ENotionPropertyType::Phone_Number },
		{ "ENotionPropertyType::Rich_Text", (int64)ENotionPropertyType::Rich_Text },
		{ "ENotionPropertyType::Select", (int64)ENotionPropertyType::Select },
		{ "ENotionPropertyType::Status", (int64)ENotionPropertyType::Status },
		{ "ENotionPropertyType::Url", (int64)ENotionPropertyType::Url },
		{ "ENotionPropertyType::Date", (int64)ENotionPropertyType::Date },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Checkbox.Comment", "/**\n * \n */" },
		{ "Checkbox.Name", "ENotionPropertyType::Checkbox" },
		{ "Comment", "/**\n * \n */" },
		{ "Date.Comment", "/**\n * \n */" },
		{ "Date.Name", "ENotionPropertyType::Date" },
		{ "Email.Comment", "/**\n * \n */" },
		{ "Email.Name", "ENotionPropertyType::Email" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
		{ "Multi_Select.Comment", "/**\n * \n */" },
		{ "Multi_Select.Name", "ENotionPropertyType::Multi_Select" },
		{ "Number.Comment", "/**\n * \n */" },
		{ "Number.Name", "ENotionPropertyType::Number" },
		{ "People.Comment", "/**\n * \n */" },
		{ "People.Name", "ENotionPropertyType::People" },
		{ "Phone_Number.Comment", "/**\n * \n */" },
		{ "Phone_Number.Name", "ENotionPropertyType::Phone_Number" },
		{ "Rich_Text.Comment", "/**\n * \n */" },
		{ "Rich_Text.Name", "ENotionPropertyType::Rich_Text" },
		{ "Select.Comment", "/**\n * \n */" },
		{ "Select.Name", "ENotionPropertyType::Select" },
		{ "Status.Comment", "/**\n * \n */" },
		{ "Status.Name", "ENotionPropertyType::Status" },
		{ "Url.Comment", "/**\n * \n */" },
		{ "Url.Name", "ENotionPropertyType::Url" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal,
		nullptr,
		"ENotionPropertyType",
		"ENotionPropertyType",
		Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NotionUnreal_ENotionPropertyType()
	{
		if (!Z_Registration_Info_UEnum_ENotionPropertyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENotionPropertyType.InnerSingleton, Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENotionPropertyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENotionScreenPosition;
	static UEnum* ENotionScreenPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENotionScreenPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENotionScreenPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("ENotionScreenPosition"));
		}
		return Z_Registration_Info_UEnum_ENotionScreenPosition.OuterSingleton;
	}
	template<> NOTIONUNREAL_API UEnum* StaticEnum<ENotionScreenPosition>()
	{
		return ENotionScreenPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enumerators[] = {
		{ "ENotionScreenPosition::TopLeft", (int64)ENotionScreenPosition::TopLeft },
		{ "ENotionScreenPosition::Top", (int64)ENotionScreenPosition::Top },
		{ "ENotionScreenPosition::TopRight", (int64)ENotionScreenPosition::TopRight },
		{ "ENotionScreenPosition::Right", (int64)ENotionScreenPosition::Right },
		{ "ENotionScreenPosition::BottomRight", (int64)ENotionScreenPosition::BottomRight },
		{ "ENotionScreenPosition::Bottom", (int64)ENotionScreenPosition::Bottom },
		{ "ENotionScreenPosition::BottomLeft", (int64)ENotionScreenPosition::BottomLeft },
		{ "ENotionScreenPosition::Left", (int64)ENotionScreenPosition::Left },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "ENotionScreenPosition::Bottom" },
		{ "BottomLeft.Name", "ENotionScreenPosition::BottomLeft" },
		{ "BottomRight.Name", "ENotionScreenPosition::BottomRight" },
		{ "Left.Name", "ENotionScreenPosition::Left" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
		{ "Right.Name", "ENotionScreenPosition::Right" },
		{ "Top.Name", "ENotionScreenPosition::Top" },
		{ "TopLeft.Name", "ENotionScreenPosition::TopLeft" },
		{ "TopRight.Name", "ENotionScreenPosition::TopRight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal,
		nullptr,
		"ENotionScreenPosition",
		"ENotionScreenPosition",
		Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition()
	{
		if (!Z_Registration_Info_UEnum_ENotionScreenPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENotionScreenPosition.InnerSingleton, Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENotionScreenPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionUser;
class UScriptStruct* FNotionUser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionUser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionUser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionUser, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionUser"));
	}
	return Z_Registration_Info_UScriptStruct_NotionUser.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionUser>()
{
	return FNotionUser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNotionUser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isVisibleInUI_MetaData[];
#endif
		static void NewProp_isVisibleInUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isVisibleInUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDefault_MetaData[];
#endif
		static void NewProp_isDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNotionUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionUser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionUser, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionUser, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI_SetBit(void* Obj)
	{
		((FNotionUser*)Obj)->isVisibleInUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI = { "isVisibleInUI", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNotionUser), &Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault_SetBit(void* Obj)
	{
		((FNotionUser*)Obj)->isDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault = { "isDefault", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNotionUser), &Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
		nullptr,
		&NewStructOps,
		"NotionUser",
		sizeof(FNotionUser),
		alignof(FNotionUser),
		Z_Construct_UScriptStruct_FNotionUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNotionUser()
	{
		if (!Z_Registration_Info_UScriptStruct_NotionUser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionUser.InnerSingleton, Z_Construct_UScriptStruct_FNotionUser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NotionUser.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionSelection;
class UScriptStruct* FNotionSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionSelection, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionSelection"));
	}
	return Z_Registration_Info_UScriptStruct_NotionSelection.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionSelection>()
{
	return FNotionSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNotionSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionSelection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNotionSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionSelection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionSelection, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionSelection, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionSelection, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
		nullptr,
		&NewStructOps,
		"NotionSelection",
		sizeof(FNotionSelection),
		alignof(FNotionSelection),
		Z_Construct_UScriptStruct_FNotionSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNotionSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_NotionSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionSelection.InnerSingleton, Z_Construct_UScriptStruct_FNotionSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NotionSelection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionProperty;
class UScriptStruct* FNotionProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionProperty, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionProperty"));
	}
	return Z_Registration_Info_UScriptStruct_NotionProperty.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionProperty>()
{
	return FNotionProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNotionProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isVisibleInUI_MetaData[];
#endif
		static void NewProp_isVisibleInUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isVisibleInUI;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCheckboxState_MetaData[];
#endif
		static void NewProp_DefaultCheckboxState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultCheckboxState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOptionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOptionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultOptionNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOptionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOptionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNotionProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionProperty, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionProperty, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI_SetBit(void* Obj)
	{
		((FNotionProperty*)Obj)->isVisibleInUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI = { "isVisibleInUI", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNotionProperty), &Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionProperty, PropertyType), Z_Construct_UEnum_NotionUnreal_ENotionPropertyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType_MetaData)) }; // 2106306872
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNotionSelection, METADATA_PARAMS(nullptr, 0) }; // 1185165343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionProperty, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options_MetaData)) }; // 1185165343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Checkbox" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState_SetBit(void* Obj)
	{
		((FNotionProperty*)Obj)->DefaultCheckboxState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState = { "DefaultCheckboxState", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNotionProperty), &Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultContent_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Email || PropertyType==ENotionPropertyType::Phone_Number  || PropertyType==ENotionPropertyType::Rich_Text || PropertyType==ENotionPropertyType::Url || PropertyType==ENotionPropertyType::Number" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultContent = { "DefaultContent", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionProperty, DefaultContent), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultContent_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames_Inner = { "DefaultOptionNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Multi_Select" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames = { "DefaultOptionNames", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionProperty, DefaultOptionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionName_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Select || PropertyType==ENotionPropertyType::Status" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionName = { "DefaultOptionName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionProperty, DefaultOptionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
		nullptr,
		&NewStructOps,
		"NotionProperty",
		sizeof(FNotionProperty),
		alignof(FNotionProperty),
		Z_Construct_UScriptStruct_FNotionProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNotionProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_NotionProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionProperty.InnerSingleton, Z_Construct_UScriptStruct_FNotionProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NotionProperty.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionKeyInfo;
class UScriptStruct* FNotionKeyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionKeyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionKeyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionKeyInfo, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionKeyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NotionKeyInfo.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionKeyInfo>()
{
	return FNotionKeyInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNotionKeyInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shift_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shift;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ctrl_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ctrl_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Ctrl;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Alt_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Alt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Cmd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionKeyInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionKeyInfo, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionKeyInfo, Shift), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift_MetaData)) }; // 1662204813
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionKeyInfo, Ctrl), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl_MetaData)) }; // 1662204813
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionKeyInfo, Alt), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt_MetaData)) }; // 1662204813
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionKeyInfo, Cmd), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd_MetaData)) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
		nullptr,
		&NewStructOps,
		"NotionKeyInfo",
		sizeof(FNotionKeyInfo),
		alignof(FNotionKeyInfo),
		Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNotionKeyInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NotionKeyInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionKeyInfo.InnerSingleton, Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NotionKeyInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionConnection;
class UScriptStruct* FNotionConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionConnection, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionConnection"));
	}
	return Z_Registration_Info_UScriptStruct_NotionConnection.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionConnection>()
{
	return FNotionConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNotionConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_notionAPIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_notionAPIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_notionDatabaseID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_notionDatabaseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionConnection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNotionConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionAPIKey_MetaData[] = {
		{ "Category", "Connections" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionAPIKey = { "notionAPIKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionConnection, notionAPIKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionAPIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionAPIKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionDatabaseID_MetaData[] = {
		{ "Category", "Connections" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionDatabaseID = { "notionDatabaseID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionConnection, notionDatabaseID), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionDatabaseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionDatabaseID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "Category", "Connections" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNotionConnection, DatabaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_DatabaseName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionAPIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_notionDatabaseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionConnection_Statics::NewProp_DatabaseName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
		nullptr,
		&NewStructOps,
		"NotionConnection",
		sizeof(FNotionConnection),
		alignof(FNotionConnection),
		Z_Construct_UScriptStruct_FNotionConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNotionConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNotionConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_NotionConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionConnection.InnerSingleton, Z_Construct_UScriptStruct_FNotionConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NotionConnection.InnerSingleton;
	}
	void UNotionSettings::StaticRegisterNativesUNotionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionSettings);
	UClass* Z_Construct_UClass_UNotionSettings_NoRegister()
	{
		return UNotionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNotionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatabaseConnections_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseConnections_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseConnections_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DatabaseConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_notionAPIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_notionAPIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_notionDatabaseID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_notionDatabaseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskNameProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskNameProperty;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatabaseProperties_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DatabaseProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatabaseUsers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseUsers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseUsers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DatabaseUsers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLog_MetaData[];
#endif
		static void NewProp_SendLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SendLog;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGameWindowPosition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameWindowPosition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InGameWindowPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameShortcut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGameShortcut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnablePaintMode_MetaData[];
#endif
		static void NewProp_EnablePaintMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePaintMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileHostUploadUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileHostUploadUrl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileHostUploadHeaders_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileHostUploadHeaders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileHostUploadHeaders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_fileHostUploadHeaders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filePublicParentUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePublicParentUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Prueba de notion\n" },
		{ "DisplayName", "Notion Integration" },
		{ "IncludePath", "NotionSettings.h" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Prueba de notion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections_ValueProp = { "DatabaseConnections", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNotionConnection, METADATA_PARAMS(nullptr, 0) }; // 670126477
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections_Key_KeyProp = { "DatabaseConnections_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections_MetaData[] = {
		{ "Category", "Connections" },
		{ "Comment", "// mapeo de conexiones a bases de datos \n" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
		{ "ToolTip", "mapeo de conexiones a bases de datos" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections = { "DatabaseConnections", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, DatabaseConnections), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections_MetaData)) }; // 670126477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionAPIKey_MetaData[] = {
		{ "Category", "NotionAuthentication" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionAPIKey = { "notionAPIKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, notionAPIKey), METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionAPIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionAPIKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionDatabaseID_MetaData[] = {
		{ "Category", "NotionAuthentication" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionDatabaseID = { "notionDatabaseID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, notionDatabaseID), METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionDatabaseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionDatabaseID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, DatabaseName), METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_TaskNameProperty_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_TaskNameProperty = { "TaskNameProperty", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, TaskNameProperty), METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_TaskNameProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_TaskNameProperty_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_ValueProp = { "DatabaseProperties", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNotionProperty, METADATA_PARAMS(nullptr, 0) }; // 1189275927
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_Key_KeyProp = { "DatabaseProperties_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties = { "DatabaseProperties", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, DatabaseProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_MetaData)) }; // 1189275927
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_ValueProp = { "DatabaseUsers", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNotionUser, METADATA_PARAMS(nullptr, 0) }; // 1601244349
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_Key_KeyProp = { "DatabaseUsers_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_MetaData[] = {
		{ "Category", "Users" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers = { "DatabaseUsers", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, DatabaseUsers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_MetaData)) }; // 1601244349
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog_SetBit(void* Obj)
	{
		((UNotionSettings*)Obj)->SendLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog = { "SendLog", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNotionSettings), &Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition = { "InGameWindowPosition", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, InGameWindowPosition), Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition_MetaData)) }; // 4123834467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameShortcut_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameShortcut = { "InGameShortcut", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, InGameShortcut), Z_Construct_UScriptStruct_FNotionKeyInfo, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameShortcut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameShortcut_MetaData)) }; // 193669391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode_MetaData[] = {
		{ "Category", "PaintMode" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode_SetBit(void* Obj)
	{
		((UNotionSettings*)Obj)->EnablePaintMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode = { "EnablePaintMode", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNotionSettings), &Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "PaintMode" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadUrl_MetaData[] = {
		{ "Category", "FileHostingCUrlAuth" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadUrl = { "fileHostUploadUrl", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, fileHostUploadUrl), METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadUrl_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_ValueProp = { "fileHostUploadHeaders", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_Key_KeyProp = { "fileHostUploadHeaders_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_MetaData[] = {
		{ "Category", "FileHostingCUrlAuth" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders = { "fileHostUploadHeaders", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, fileHostUploadHeaders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionSettings_Statics::NewProp_filePublicParentUrl_MetaData[] = {
		{ "Category", "FileHostingCUrlAuth" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_filePublicParentUrl = { "filePublicParentUrl", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionSettings, filePublicParentUrl), METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::NewProp_filePublicParentUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::NewProp_filePublicParentUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionAPIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionDatabaseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_TaskNameProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameShortcut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_filePublicParentUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionSettings_Statics::ClassParams = {
		&UNotionSettings::StaticClass,
		"Notion",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNotionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNotionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotionSettings()
	{
		if (!Z_Registration_Info_UClass_UNotionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionSettings.OuterSingleton, Z_Construct_UClass_UNotionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotionSettings.OuterSingleton;
	}
	template<> NOTIONUNREAL_API UClass* StaticClass<UNotionSettings>()
	{
		return UNotionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionSettings);
	UNotionSettings::~UNotionSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::EnumInfo[] = {
		{ ENotionPropertyType_StaticEnum, TEXT("ENotionPropertyType"), &Z_Registration_Info_UEnum_ENotionPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2106306872U) },
		{ ENotionScreenPosition_StaticEnum, TEXT("ENotionScreenPosition"), &Z_Registration_Info_UEnum_ENotionScreenPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4123834467U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::ScriptStructInfo[] = {
		{ FNotionUser::StaticStruct, Z_Construct_UScriptStruct_FNotionUser_Statics::NewStructOps, TEXT("NotionUser"), &Z_Registration_Info_UScriptStruct_NotionUser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionUser), 1601244349U) },
		{ FNotionSelection::StaticStruct, Z_Construct_UScriptStruct_FNotionSelection_Statics::NewStructOps, TEXT("NotionSelection"), &Z_Registration_Info_UScriptStruct_NotionSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionSelection), 1185165343U) },
		{ FNotionProperty::StaticStruct, Z_Construct_UScriptStruct_FNotionProperty_Statics::NewStructOps, TEXT("NotionProperty"), &Z_Registration_Info_UScriptStruct_NotionProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionProperty), 1189275927U) },
		{ FNotionKeyInfo::StaticStruct, Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewStructOps, TEXT("NotionKeyInfo"), &Z_Registration_Info_UScriptStruct_NotionKeyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionKeyInfo), 193669391U) },
		{ FNotionConnection::StaticStruct, Z_Construct_UScriptStruct_FNotionConnection_Statics::NewStructOps, TEXT("NotionConnection"), &Z_Registration_Info_UScriptStruct_NotionConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionConnection), 670126477U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotionSettings, UNotionSettings::StaticClass, TEXT("UNotionSettings"), &Z_Registration_Info_UClass_UNotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionSettings), 3914258753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_4241852855(TEXT("/Script/NotionUnreal"),
		Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
