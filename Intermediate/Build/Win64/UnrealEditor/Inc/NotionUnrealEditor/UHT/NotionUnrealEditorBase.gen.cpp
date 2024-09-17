// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnrealEditor/Public/NotionUnrealEditorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionUnrealEditorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditorBase();
	NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NotionUnrealEditor();
// End Cross Module References
	void UNotionUnrealEditorBase::StaticRegisterNativesUNotionUnrealEditorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionUnrealEditorBase);
	UClass* Z_Construct_UClass_UNotionUnrealEditorBase_NoRegister()
	{
		return UNotionUnrealEditorBase::StaticClass();
	}
	struct Z_Construct_UClass_UNotionUnrealEditorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotionUnrealEditorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnrealEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionUnrealEditorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor object handles all of the basic logic of the Plugin.\n * It's tasks are to create a widget which is put into the dock.\n * Override it to add extra logic the editor should handle.\n */" },
		{ "IncludePath", "NotionUnrealEditorBase.h" },
		{ "ModuleRelativePath", "Public/NotionUnrealEditorBase.h" },
		{ "ToolTip", "Editor object handles all of the basic logic of the Plugin.\nIt's tasks are to create a widget which is put into the dock.\nOverride it to add extra logic the editor should handle." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotionUnrealEditorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionUnrealEditorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionUnrealEditorBase_Statics::ClassParams = {
		&UNotionUnrealEditorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotionUnrealEditorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionUnrealEditorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotionUnrealEditorBase()
	{
		if (!Z_Registration_Info_UClass_UNotionUnrealEditorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionUnrealEditorBase.OuterSingleton, Z_Construct_UClass_UNotionUnrealEditorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotionUnrealEditorBase.OuterSingleton;
	}
	template<> NOTIONUNREALEDITOR_API UClass* StaticClass<UNotionUnrealEditorBase>()
	{
		return UNotionUnrealEditorBase::StaticClass();
	}
	UNotionUnrealEditorBase::UNotionUnrealEditorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionUnrealEditorBase);
	UNotionUnrealEditorBase::~UNotionUnrealEditorBase() {}
	struct Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotionUnrealEditorBase, UNotionUnrealEditorBase::StaticClass, TEXT("UNotionUnrealEditorBase"), &Z_Registration_Info_UClass_UNotionUnrealEditorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionUnrealEditorBase), 2180588509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditorBase_h_2684374155(TEXT("/Script/NotionUnrealEditor"),
		Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
