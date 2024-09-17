// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnrealEditor/Public/NotionUnrealEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionUnrealEditor() {}
// Cross Module References
	NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditor();
	NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditor_NoRegister();
	NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditorBase();
	UPackage* Z_Construct_UPackage__Script_NotionUnrealEditor();
// End Cross Module References
	void UNotionUnrealEditor::StaticRegisterNativesUNotionUnrealEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionUnrealEditor);
	UClass* Z_Construct_UClass_UNotionUnrealEditor_NoRegister()
	{
		return UNotionUnrealEditor::StaticClass();
	}
	struct Z_Construct_UClass_UNotionUnrealEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotionUnrealEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNotionUnrealEditorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NotionUnrealEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotionUnrealEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor object which handles all of the logic of the Plugin.\n */" },
		{ "IncludePath", "NotionUnrealEditor.h" },
		{ "ModuleRelativePath", "Public/NotionUnrealEditor.h" },
		{ "ToolTip", "Editor object which handles all of the logic of the Plugin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotionUnrealEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionUnrealEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionUnrealEditor_Statics::ClassParams = {
		&UNotionUnrealEditor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNotionUnrealEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotionUnrealEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotionUnrealEditor()
	{
		if (!Z_Registration_Info_UClass_UNotionUnrealEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionUnrealEditor.OuterSingleton, Z_Construct_UClass_UNotionUnrealEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotionUnrealEditor.OuterSingleton;
	}
	template<> NOTIONUNREALEDITOR_API UClass* StaticClass<UNotionUnrealEditor>()
	{
		return UNotionUnrealEditor::StaticClass();
	}
	UNotionUnrealEditor::UNotionUnrealEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionUnrealEditor);
	UNotionUnrealEditor::~UNotionUnrealEditor() {}
	struct Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotionUnrealEditor, UNotionUnrealEditor::StaticClass, TEXT("UNotionUnrealEditor"), &Z_Registration_Info_UClass_UNotionUnrealEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionUnrealEditor), 3248365350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_1166157072(TEXT("/Script/NotionUnrealEditor"),
		Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andre_UnrealProjects_PruebaDeNotion_plugins_NotionUnreal_test_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
