// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FNotionUnrealModule : public IModuleInterface
{
	IConsoleCommand* ShowIngameTaskCommand;
	UNotionKeyCommands* commands;

public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void OpenNotionTaskMenu(const TArray<FString>& Args, UWorld* World);

	void RegisterShortcut();
};
