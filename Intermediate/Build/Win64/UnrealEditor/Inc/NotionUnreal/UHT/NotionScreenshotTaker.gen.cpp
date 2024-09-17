// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnreal/Public/NotionScreenshotTaker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionScreenshotTaker() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionScreenshotTaker();
	NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionScreenshotTaker_NoRegister();
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature();
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NotionUnreal();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics
	{
		struct _Script_NotionUnreal_eventOnScreenshotJpeg_Parms
		{
			TArray<uint8> Jpeg;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Jpeg_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jpeg_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Jpeg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg_Inner = { "Jpeg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg = { "Jpeg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventOnScreenshotJpeg_Parms, Jpeg), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n * \n */" },
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal, nullptr, "OnScreenshotJpeg__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::_Script_NotionUnreal_eventOnScreenshotJpeg_Parms), Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnScreenshotJpeg_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotJpeg, TArray<uint8> const& Jpeg)
{
	struct _Script_NotionUnreal_eventOnScreenshotJpeg_Parms
	{
		TArray<uint8> Jpeg;
	};
	_Script_NotionUnreal_eventOnScreenshotJpeg_Parms Parms;
	Parms.Jpeg=Jpeg;
	OnScreenshotJpeg.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics
	{
		struct _Script_NotionUnreal_eventScreenshotResponse_Parms
		{
			uint8 Status;
			FString ResponseString;
			FString FileURL;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventScreenshotResponse_Parms, Status), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_ResponseString = { "ResponseString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventScreenshotResponse_Parms, ResponseString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_FileURL = { "FileURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventScreenshotResponse_Parms, FileURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_ResponseString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_FileURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal, nullptr, "ScreenshotResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::_Script_NotionUnreal_eventScreenshotResponse_Parms), Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FScreenshotResponse_DelegateWrapper(const FMulticastScriptDelegate& ScreenshotResponse, uint8 Status, const FString& ResponseString, const FString& FileURL)
{
	struct _Script_NotionUnreal_eventScreenshotResponse_Parms
	{
		uint8 Status;
		FString ResponseString;
		FString FileURL;
	};
	_Script_NotionUnreal_eventScreenshotResponse_Parms Parms;
	Parms.Status=Status;
	Parms.ResponseString=ResponseString;
	Parms.FileURL=FileURL;
	ScreenshotResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNotionScreenshotTaker::execRequestScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestScreenshot();
		P_NATIVE_END;
	}
	void UNotionScreenshotTaker::StaticRegisterNativesUNotionScreenshotTaker()
	{
		UClass* Class = UNotionScreenshotTaker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestScreenshot", &UNotionScreenshotTaker::execRequestScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotionScreenshotTaker, nullptr, "RequestScreenshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionScreenshotTaker);
	UClass* Z_Construct_UClass_UNotionScreenshotTaker_NoRegister()
	{
		return UNotionScreenshotTaker::StaticClass();
	}
	struct Z_Construct_UClass_UNotionScreenshotTaker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotUploaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotUploaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotionScreenshotTaker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNotionScreenshotTaker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot, "RequestScreenshot" }, // 959011128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionScreenshotTaker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NotionScreenshotTaker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionScreenshotTaker_Statics::NewProp_ScreenshotUploaded_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNotionScreenshotTaker_Statics::NewProp_ScreenshotUploaded = { "ScreenshotUploaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNotionScreenshotTaker, ScreenshotUploaded), Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNotionScreenshotTaker_Statics::NewProp_ScreenshotUploaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionScreenshotTaker_Statics::NewProp_ScreenshotUploaded_MetaData)) }; // 3665443246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotionScreenshotTaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionScreenshotTaker_Statics::NewProp_ScreenshotUploaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotionScreenshotTaker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionScreenshotTaker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionScreenshotTaker_Statics::ClassParams = {
		&UNotionScreenshotTaker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNotionScreenshotTaker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotionScreenshotTaker_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotionScreenshotTaker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionScreenshotTaker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotionScreenshotTaker()
	{
		if (!Z_Registration_Info_UClass_UNotionScreenshotTaker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionScreenshotTaker.OuterSingleton, Z_Construct_UClass_UNotionScreenshotTaker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotionScreenshotTaker.OuterSingleton;
	}
	template<> NOTIONUNREAL_API UClass* StaticClass<UNotionScreenshotTaker>()
	{
		return UNotionScreenshotTaker::StaticClass();
	}
	UNotionScreenshotTaker::UNotionScreenshotTaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionScreenshotTaker);
	UNotionScreenshotTaker::~UNotionScreenshotTaker() {}
	struct Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionScreenshotTaker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionScreenshotTaker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotionScreenshotTaker, UNotionScreenshotTaker::StaticClass, TEXT("UNotionScreenshotTaker"), &Z_Registration_Info_UClass_UNotionScreenshotTaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionScreenshotTaker), 210485596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionScreenshotTaker_h_3361993807(TEXT("/Script/NotionUnreal"),
		Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionScreenshotTaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionScreenshotTaker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
