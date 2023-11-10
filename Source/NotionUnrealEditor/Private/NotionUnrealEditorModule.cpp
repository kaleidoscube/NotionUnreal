// Copyright (c) 2022 Damian Nowakowski. All rights reserved.

#include "NotionUnrealEditorModule.h"
#include "NotionUnrealEditor.h"
#include "NotionUnrealEditorCommands.h"
#include "NotionUnrealEditorStyle.h"

#include "Widgets/Docking/SDockTab.h"
#include "Framework/Docking/TabManager.h"
#include "Interfaces/IMainFrameModule.h"

#include "Settings/ProjectPackagingSettings.h"

#include "PropertyEditorModule.h"
#include "LevelEditor.h"

IMPLEMENT_MODULE(FNotionUnrealEditorModule, FNotionUnrealEditor)

// Id of the NotionUnreal Tab used to spawn and observe this tab.
const FName NotionUnrealTabId = FName(TEXT("NotionUnreal"));

void FNotionUnrealEditorModule::StartupModule()
{
	// Register Styles.
	FNotionUnrealEditorStyle::Initialize();
	FNotionUnrealEditorStyle::ReloadTextures();

	// Register UICommands.
	FNotionUnrealEditorCommands::Register();

	// Register OnPostEngineInit delegate.
	OnPostEngineInitDelegateHandle = FCoreDelegates::OnPostEngineInit.AddRaw(this, &FNotionUnrealEditorModule::OnPostEngineInit);

	// Create and initialize Editor object.
	Editor = NewObject<UNotionUnrealEditorBase>(GetTransientPackage(), UNotionUnrealEditor::StaticClass());
	Editor->Init();

	// Register Tab Spawner. Do not show it in menu, as it will be invoked manually by a UICommand.
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
		NotionUnrealTabId,
		FOnSpawnTab::CreateRaw(this, &FNotionUnrealEditorModule::SpawnEditor),
		FCanSpawnTab::CreateLambda([this](const FSpawnTabArgs& Args) -> bool { return CanSpawnEditor(); })
	)
	.SetMenuType(ETabSpawnerMenuType::Hidden)
	.SetIcon(FSlateIcon(FNotionUnrealEditorStyle::GetStyleSetName(), "NotionUnrealEditorStyle.MenuIcon"));
	
}

void FNotionUnrealEditorModule::ShutdownModule()
{
	// Unregister Tab Spawner
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(NotionUnrealTabId);

	// Cleanup the Editor object.
	Editor = nullptr;

	// Remove OnPostEngineInit delegate
	FCoreDelegates::OnPostEngineInit.Remove(OnPostEngineInitDelegateHandle);

	// Unregister UICommands.
	FNotionUnrealEditorCommands::Unregister();

	// Unregister Styles.
	FNotionUnrealEditorStyle::Shutdown();
}

void FNotionUnrealEditorModule::OnPostEngineInit()
{
	// This function is for registering UICommand to the engine, so it can be executed via keyboard shortcut.
	// This will also add this UICommand to the menu, so it can also be executed from there.
	
	// This function is valid only if no Commandlet or game is running. It also requires Slate Application to be initialized.
	if ((IsRunningCommandlet() == false) && (IsRunningGame() == false) && FSlateApplication::IsInitialized())
	{
		if (FLevelEditorModule* LevelEditor = FModuleManager::LoadModulePtr<FLevelEditorModule>(TEXT("LevelEditor")))
		{
			// Create a UICommandList and map editor spawning function to the UICommand of opening Notion Unreal Editor.
			TSharedPtr<FUICommandList> Commands = MakeShareable(new FUICommandList());
			Commands->MapAction(
				FNotionUnrealEditorCommands::Get().OpenNotionUnrealWindow,
				FExecuteAction::CreateRaw(this, &FNotionUnrealEditorModule::InvokeEditorSpawn),
				FCanExecuteAction::CreateRaw(this, &FNotionUnrealEditorModule::CanSpawnEditor),
				FIsActionChecked::CreateRaw(this, &FNotionUnrealEditorModule::IsEditorSpawned)
			);

			// Register this UICommandList to the MainFrame.
			// Otherwise nothing will handle the input to trigger this command.
			IMainFrameModule& MainFrame = FModuleManager::Get().LoadModuleChecked<IMainFrameModule>("MainFrame");
			MainFrame.GetMainFrameCommandBindings()->Append(Commands.ToSharedRef());

			// Create a Menu Extender, which adds a button that executes the UICommandList of opening Notion Unreal Window.
			TSharedPtr<FExtender> MainMenuExtender = MakeShareable(new FExtender);
			MainMenuExtender->AddMenuExtension(
#if (ENGINE_MAJOR_VERSION == 5)
				FName(TEXT("Tools")),
#else
				FName(TEXT("General")),
#endif
				EExtensionHook::After, 
				Commands,
				FMenuExtensionDelegate::CreateLambda([](FMenuBuilder& MenuBuilder)
				{
					MenuBuilder.AddMenuEntry(
						FNotionUnrealEditorCommands::Get().OpenNotionUnrealWindow,
						NAME_None,
						FText::FromString(TEXT("New Notion Task")),
						FText::FromString(TEXT("Create a new Task in your Notion Database")),
						FSlateIcon(FNotionUnrealEditorStyle::GetStyleSetName(), "NotionUnrealEditorStyle.MenuIcon")
					);
				})
			);

			// Extend Editors menu with the created Menu Extender.
			LevelEditor->GetMenuExtensibilityManager()->AddExtender(MainMenuExtender);
		}
	}

	if (UProjectPackagingSettings* PackagingSettings = Cast<UProjectPackagingSettings>(UProjectPackagingSettings::StaticClass()->GetDefaultObject())) {
		bool containsEntry = false;

		for (int i = 0; i < PackagingSettings->DirectoriesToAlwaysCook.Num(); i++)
		{
			if (PackagingSettings->DirectoriesToAlwaysCook[i].Path.StartsWith("/NotionUnreal"))
			{
				containsEntry = true;
			}
		}

		if (!containsEntry) {
			// Add correct entry
			FDirectoryPath NotionPath;
			NotionPath.Path = "/NotionUnreal";
			PackagingSettings->DirectoriesToAlwaysCook.Add(NotionPath);
			UE_LOG(LogTemp, Warning, TEXT("Notion Assets missing"));
			PackagingSettings->TryUpdateDefaultConfigFile();
		}
	}
	
}

void FNotionUnrealEditorModule::AddReferencedObjects(FReferenceCollector& Collector)
{
	// Prevent Editor Object from being garbage collected.
	if (Editor)
	{
		Collector.AddReferencedObject(Editor);
	}
}

#if (ENGINE_MAJOR_VERSION == 5)
FString FNotionUnrealEditorModule::GetReferencerName() const
{
	return TEXT("NotionUnrealModuleGCObject");
}
#endif

bool FNotionUnrealEditorModule::CanSpawnEditor()
{
	// Editor can be spawned only when the Editor object say that UI can be created.
	if (Editor && Editor->CanCreateEditorUI())
	{
		return true;
	}
	return false;
}

TSharedRef<SDockTab> FNotionUnrealEditorModule::SpawnEditor(const FSpawnTabArgs& Args)
{	
	// Spawn the Editor only when we can.
	if (CanSpawnEditor())
	{
		// Spawn new DockTab and fill it with newly created editor UI.
		TSharedRef<SDockTab> NewTab = SAssignNew(EditorTab, SDockTab)
			.TabRole(ETabRole::NomadTab)
			[
				Editor->CreateEditorUI()
			];

		// Tell the Editor Object about newly spawned DockTab, as it will 
		// need it to handle various editor actions.
		Editor->SetEditorTab(NewTab);

		// Return the DockTab to the Global Tab Manager.
		return NewTab;
	}

	// If editor can't be spawned - create an empty tab.
	return SAssignNew(EditorTab, SDockTab).TabRole(ETabRole::NomadTab);
}

bool FNotionUnrealEditorModule::IsEditorSpawned()
{
	// Checks if the editor tab is already existing in the editor
	return FGlobalTabmanager::Get()->FindExistingLiveTab(NotionUnrealTabId).IsValid();
}

void FNotionUnrealEditorModule::InvokeEditorSpawn()
{
	// Tries to invoke opening a plugin tab
	FGlobalTabmanager::Get()->TryInvokeTab(NotionUnrealTabId);
}
