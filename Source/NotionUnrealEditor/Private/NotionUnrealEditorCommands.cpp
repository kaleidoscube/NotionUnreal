// Copyright (c) 2022 Damian Nowakowski. All rights reserved.

#include "NotionUnrealEditorCommands.h"
#include "EditorStyleSet.h"

FNotionUnrealEditorCommands::FNotionUnrealEditorCommands() :
	TCommands<FNotionUnrealEditorCommands>(
		TEXT("Notion Unreal Editor Commands"), 
		FText::FromString(TEXT("Commands to control the Notion Integration inside the Editor.")), 
		NAME_None, 
#if ((ENGINE_MAJOR_VERSION == 5) && (ENGINE_MINOR_VERSION >= 1))
		FAppStyle::GetAppStyleSetName()
#else
		FEditorStyle::GetStyleSetName()
#endif
	)
{}

void FNotionUnrealEditorCommands::RegisterCommands()
{
#define LOCTEXT_NAMESPACE "NotionUnrealLoc"
	UI_COMMAND(OpenNotionUnrealWindow, "New Notion Task", "Create a new Task in your Notion Database", EUserInterfaceActionType::Check, FInputChord(EModifierKey::Control, EKeys::T));
#undef LOCTEXT_NAMESPACE
}