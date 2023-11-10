// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#include "NotionUnreal.h"

// Settings

#include "NotionSettings.h"
#include "NotionKeyCommands.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

#define LOCTEXT_NAMESPACE "FNotionUnrealModule"

void FNotionUnrealModule::StartupModule()
{
	UNotionSettings* NotionSettings = GetMutableDefault<UNotionSettings>();
	NotionSettings->RetrieveDatabase();
	NotionSettings->RetrieveUsers();

	RegisterShortcut();
	ShowIngameTaskCommand = IConsoleManager::Get().RegisterConsoleCommand(TEXT("Notion.OpenTaskUI"), TEXT("test"), FConsoleCommandWithWorldAndArgsDelegate::CreateRaw(this, &FNotionUnrealModule::OpenNotionTaskMenu), ECVF_Default);

}

void FNotionUnrealModule::ShutdownModule()
{
	if (ShowIngameTaskCommand)
	{
		IConsoleManager::Get().UnregisterConsoleObject(ShowIngameTaskCommand);
		ShowIngameTaskCommand = nullptr;
	}
	
}


void FNotionUnrealModule::OpenNotionTaskMenu(const TArray<FString>& Args, UWorld* World) {

	auto* uclass = FSoftClassPath("/NotionUnreal/WBP_NewTask_Game.WBP_NewTask_Game_C").TryLoadClass<UUserWidget>();

	FWorldContext* world = GEngine->GetWorldContextFromGameViewport(GEngine->GameViewport);


	TArray< UUserWidget* > FoundWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(world->World(), FoundWidgets, uclass, false);

	if (FoundWidgets.Num() == 1) {

		if (FoundWidgets[0]->IsVisible()) {
			FoundWidgets[0]->RemoveFromParent();
			UFunction* MyBPFunc = FoundWidgets[0]->FindFunction(FName(TEXT("CancelNotionWindow")));
			if (MyBPFunc != nullptr)
			{
				FoundWidgets[0]->ProcessEvent(MyBPFunc, nullptr);
			}
		}
		else {
			FoundWidgets[0]->AddToViewport(300);

		}
	}
	else {
		UUserWidget* NewTaskMenu = CreateWidget<UUserWidget>(world->World(), uclass);
		NewTaskMenu->AddToViewport(300);
	}

}


void FNotionUnrealModule::RegisterShortcut() {

	UNotionSettings* NotionSettings = GetMutableDefault<UNotionSettings>();

	commands->SetKeyToCommand(NotionSettings->InGameShortcut, TEXT("Notion.OpenTaskUI"));
}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FNotionUnrealModule, NotionUnreal)