// Copyright (c) 2022 Damian Nowakowski. All rights reserved.

#include "NotionUnrealEditorBase.h"

#if ((ENGINE_MAJOR_VERSION == 5) && (ENGINE_MINOR_VERSION >= 1))
#include "AssetRegistry/AssetRegistryModule.h"
#else
#include "AssetRegistryModule.h"
#endif

#include "EditorUtilityWidget.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "LevelEditor.h"

void UNotionUnrealEditorBase::Init()
{
	// Empty virtual function - to be overridden
}

void UNotionUnrealEditorBase::InitializeTheWidget()
{
	// Empty virtual function - to be overridden
}

void UNotionUnrealEditorBase::SetEditorTab(const TSharedRef<SDockTab>& NewEditorTab)
{
	EditorTab = NewEditorTab;
}

UEditorUtilityWidgetBlueprint* UNotionUnrealEditorBase::GetUtilityWidgetBlueprint()
{
	// Get the Editor Utility Widget Blueprint from the content directory.
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
#if ((ENGINE_MAJOR_VERSION == 5) && (ENGINE_MINOR_VERSION >= 1))
	FAssetData AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(FSoftObjectPath("/NotionUnreal/UWBP_NewTask_Editor.UWBP_NewTask_Editor"));
#else
	FAssetData AssetData = AssetRegistryModule.Get().GetAssetByObjectPath("/NotionUnreal/UWBP_NewTask_Editor.UWBP_NewTask_Editor");
#endif
	return Cast<UEditorUtilityWidgetBlueprint>(AssetData.GetAsset());
}

bool UNotionUnrealEditorBase::CanCreateEditorUI()
{
	// Editor UI can be created only when we have proper Editor Utility Widget Blueprint available.
	return GetUtilityWidgetBlueprint() != nullptr;
}

TSharedRef<SWidget> UNotionUnrealEditorBase::CreateEditorUI()
{
	// Register OnMapChanged event so we can properly handle Tab and Widget when changing levels.
	FLevelEditorModule& LevelEditor = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditor.OnMapChanged().AddUObject(this, &UNotionUnrealEditorBase::ChangeTabWorld);

	// Create the Widget
	return CreateEditorWidget();
}

TSharedRef<SWidget> UNotionUnrealEditorBase::CreateEditorWidget()
{
	TSharedRef<SWidget> CreatedWidget = SNullWidget::NullWidget;
	if (UEditorUtilityWidgetBlueprint* UtilityWidgetBP = GetUtilityWidgetBlueprint())
	{
		
		
		
		UtilityWidgetBP->SetRegistrationName(FName("NotionUnreal"));
		// Create Widget from the Editor Utility Widget BP.
		CreatedWidget = UtilityWidgetBP->CreateUtilityWidget();
		
		// Save the pointer to the created Widget and initialize it.
		//UEditorUtilityWidget EditorWidget = Cast<UEditorUtilityWidget>(UtilityWidgetBP->GetCreatedWidget());
		
	}

	// Returned Widget will be docked into the Editor Tab.
	return CreatedWidget;
}

void UNotionUnrealEditorBase::ChangeTabWorld(UWorld* World, EMapChangeType MapChangeType)
{
	// Handle the event when editor map changes.
	if (MapChangeType == EMapChangeType::TearDownWorld)
	{
		// If the world is destroyed - set the Tab content to null and null the Widget.
		if (EditorTab.IsValid())
		{
			EditorTab.Pin()->SetContent(SNullWidget::NullWidget);
		}
		
	}
	else if (MapChangeType == EMapChangeType::NewMap || MapChangeType == EMapChangeType::LoadMap)
	{
		// If the map has been created or loaded and the Tab is valid - put a new Widget into this Tab.
		if (EditorTab.IsValid())
		{
			EditorTab.Pin()->SetContent(CreateEditorWidget());
		}
	}
}
