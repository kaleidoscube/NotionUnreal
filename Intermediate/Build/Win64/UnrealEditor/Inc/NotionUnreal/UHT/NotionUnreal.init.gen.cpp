// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionUnreal_init() {}
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature();
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature();
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature();
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NotionUnreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NotionUnreal()
	{
		if (!Z_Registration_Info_UPackage__Script_NotionUnreal.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NotionUnreal",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000080,
				0x6831B999,
				0xAACA7779,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NotionUnreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NotionUnreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NotionUnreal(Z_Construct_UPackage__Script_NotionUnreal, TEXT("/Script/NotionUnreal"), Z_Registration_Info_UPackage__Script_NotionUnreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6831B999, 0xAACA7779));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
