// Copyright (c) 2022 Damian Nowakowski. All rights reserved.

#include "NotionUnrealEditorStyle.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"

// Null declaration of static variable (for linker needs)
TSharedPtr<FSlateStyleSet> FNotionUnrealEditorStyle::StyleInstance = nullptr;

void FNotionUnrealEditorStyle::Initialize()
{
	if (StyleInstance.IsValid() == false)
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FNotionUnrealEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

void FNotionUnrealEditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

FName FNotionUnrealEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("NotionUnrealEditorStyle"));
	return StyleSetName;
}

TSharedRef<FSlateStyleSet> FNotionUnrealEditorStyle::Create()
{
	// Create a new Style Set with a content root set to Resources directory of the plugin.
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("NotionUnreal")->GetBaseDir() / TEXT("Resources"));

	// Create a new Slate Image Brush, which is Icon16.png from Resources directory.
	FSlateImageBrush* Brush = new FSlateImageBrush(Style->RootToContentDir(TEXT("Icon16"), TEXT(".png")), { 16.f, 16.f });
	
	// Add newly created Brush to the Style Set.
	Style->Set("NotionUnrealEditorStyle.MenuIcon", Brush);
	
	// Result is a Style Set with menu icon in it.
	return Style;
}
