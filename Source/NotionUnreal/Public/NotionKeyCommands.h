// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "NotionSettings.h"

/**
 * 
 */
class NOTIONUNREAL_API UNotionKeyCommands
{
public:

	bool IsBindableKey(const FKey& Key);
	void UpdatePlayerInput(UPlayerInput* PlayerInput, const FKeyBind& KeyBind);
	FKeyBind CreateUnrealKeyBinding(const FNotionKeyInfo& KeyInfo, const FString& Command);
	void SetKeyToCommand(const FNotionKeyInfo& KeyInfo, const TCHAR* CommandName);
};
