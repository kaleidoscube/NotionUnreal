// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnreal/Public/NotionUnrealBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionUnrealBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionUnrealBPLibrary();
	NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionUnrealBPLibrary_NoRegister();
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature();
	NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NotionUnreal();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics
	{
		struct _Script_NotionUnreal_eventResponse_Parms
		{
			uint8 Status;
			FString ResponseString;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventResponse_Parms, Status), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::NewProp_ResponseString = { "ResponseString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventResponse_Parms, ResponseString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::NewProp_ResponseString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NotionUnrealBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal, nullptr, "Response__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::_Script_NotionUnreal_eventResponse_Parms), Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResponse_DelegateWrapper(const FScriptDelegate& Response, uint8 Status, const FString& ResponseString)
{
	struct _Script_NotionUnreal_eventResponse_Parms
	{
		uint8 Status;
		FString ResponseString;
	};
	_Script_NotionUnreal_eventResponse_Parms Parms;
	Parms.Status=Status;
	Parms.ResponseString=ResponseString;
	Response.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics
	{
		struct _Script_NotionUnreal_eventLogResponse_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventLogResponse_Parms, Status), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::NewProp_ResponseString = { "ResponseString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventLogResponse_Parms, ResponseString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::NewProp_FileURL = { "FileURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NotionUnreal_eventLogResponse_Parms, FileURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::NewProp_ResponseString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::NewProp_FileURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NotionUnrealBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal, nullptr, "LogResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::_Script_NotionUnreal_eventLogResponse_Parms), Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLogResponse_DelegateWrapper(const FScriptDelegate& LogResponse, uint8 Status, const FString& ResponseString, const FString& FileURL)
{
	struct _Script_NotionUnreal_eventLogResponse_Parms
	{
		uint8 Status;
		FString ResponseString;
		FString FileURL;
	};
	_Script_NotionUnreal_eventLogResponse_Parms Parms;
	Parms.Status=Status;
	Parms.ResponseString=ResponseString;
	Parms.FileURL=FileURL;
	LogResponse.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNotionUnrealBPLibrary::execUploadLog)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNotionUnrealBPLibrary::UploadLog(FLogResponse(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNotionUnrealBPLibrary::execCreateTaskInNotion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Properties);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentChildren);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNotionUnrealBPLibrary::CreateTaskInNotion(Z_Param_Properties,Z_Param_ContentChildren,FResponse(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	void UNotionUnrealBPLibrary::StaticRegisterNativesUNotionUnrealBPLibrary()
	{
		UClass* Class = UNotionUnrealBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTaskInNotion", &UNotionUnrealBPLibrary::execCreateTaskInNotion },
			{ "UploadLog", &UNotionUnrealBPLibrary::execUploadLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics
	{
		struct NotionUnrealBPLibrary_eventCreateTaskInNotion_Parms
		{
			FString Properties;
			FString ContentChildren;
			FScriptDelegate OnComplete;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentChildren_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_Properties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NotionUnrealBPLibrary_eventCreateTaskInNotion_Parms, Properties), METADATA_PARAMS(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_ContentChildren_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_ContentChildren = { "ContentChildren", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NotionUnrealBPLibrary_eventCreateTaskInNotion_Parms, ContentChildren), METADATA_PARAMS(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_ContentChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_ContentChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NotionUnrealBPLibrary_eventCreateTaskInNotion_Parms, OnComplete), Z_Construct_UDelegateFunction_NotionUnreal_Response__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_OnComplete_MetaData)) }; // 159366971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_ContentChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NewProp_OnComplete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notion Plugin Internal" },
		{ "DisplayName", "Make a Notion Task" },
		{ "Keywords", "Make a Notion Task" },
		{ "ModuleRelativePath", "Public/NotionUnrealBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotionUnrealBPLibrary, nullptr, "CreateTaskInNotion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::NotionUnrealBPLibrary_eventCreateTaskInNotion_Parms), Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics
	{
		struct NotionUnrealBPLibrary_eventUploadLog_Parms
		{
			FScriptDelegate OnComplete;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NotionUnrealBPLibrary_eventUploadLog_Parms, OnComplete), Z_Construct_UDelegateFunction_NotionUnreal_LogResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::NewProp_OnComplete_MetaData)) }; // 3599425915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::NewProp_OnComplete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notion Plugin Internal" },
		{ "DisplayName", "Upload Log" },
		{ "Keywords", "Get Game Log" },
		{ "ModuleRelativePath", "Public/NotionUnrealBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotionUnrealBPLibrary, nullptr, "UploadLog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::NotionUnrealBPLibrary_eventUploadLog_Parms), Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionUnrealBPLibrary);
	UClass* Z_Construct_UClass_UNotionUnrealBPLibrary_NoRegister()
	{
		return UNotionUnrealBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNotionUnrealBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNotionUnrealBPLibrary_CreateTaskInNotion, "CreateTaskInNotion" }, // 1777120283
		{ &Z_Construct_UFunction_UNotionUnrealBPLibrary_UploadLog, "UploadLog" }, // 565534999
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NotionUnrealBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NotionUnrealBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionUnrealBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::ClassParams = {
		&UNotionUnrealBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotionUnrealBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UNotionUnrealBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionUnrealBPLibrary.OuterSingleton, Z_Construct_UClass_UNotionUnrealBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotionUnrealBPLibrary.OuterSingleton;
	}
	template<> NOTIONUNREAL_API UClass* StaticClass<UNotionUnrealBPLibrary>()
	{
		return UNotionUnrealBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionUnrealBPLibrary);
	UNotionUnrealBPLibrary::~UNotionUnrealBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotionUnrealBPLibrary, UNotionUnrealBPLibrary::StaticClass, TEXT("UNotionUnrealBPLibrary"), &Z_Registration_Info_UClass_UNotionUnrealBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionUnrealBPLibrary), 545007207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_3813404282(TEXT("/Script/NotionUnreal"),
		Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
