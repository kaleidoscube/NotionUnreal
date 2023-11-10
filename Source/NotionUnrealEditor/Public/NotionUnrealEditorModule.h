// Copyright (c) 2022 Damian Nowakowski. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/GCObject.h"
#include "Modules/ModuleManager.h"

/**
 * Editor module, which handles Editor object and DockTab creation.
 */

class NOTIONUNREALEDITOR_API FNotionUnrealEditorModule : public IModuleInterface, public FGCObject
{

public:

	// IModuleInterface implementation
	void StartupModule() override;
	void ShutdownModule() override;

	// FGCObject implementation
	void AddReferencedObjects(FReferenceCollector& Collector) override;
#if (ENGINE_MAJOR_VERSION == 5)
	FString GetReferencerName() const override;
#endif

protected:

	/**
	 * Run some initializations after the Engine has been initialized.
	 */
	void OnPostEngineInit();

private:

	/**
	 * Returns true if the editor can be spawned.
	 */
	bool CanSpawnEditor();

	/**
	 * Spawns editor and returns a ref of the DockTab to which the editor
	 * has been pinned.
	 */
	TSharedRef<class SDockTab> SpawnEditor(const FSpawnTabArgs& Args);

	/**
	 * Checks if the editor is spawned.
	 */
	bool IsEditorSpawned();

	/**
	 * Invokes spawning editor from the command.
	 */
	void InvokeEditorSpawn();
	
	// Editor object.
	class UNotionUnrealEditorBase* Editor;

	// DockTab reference with the editor.
	TWeakPtr<class SDockTab> EditorTab;

	// Handler for an OnPostEngineInit delegate.
	FDelegateHandle OnPostEngineInitDelegateHandle;
};
