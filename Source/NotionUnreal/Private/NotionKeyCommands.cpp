// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.
#include "NotionKeyCommands.h"



bool UNotionKeyCommands::IsBindableKey(const FKey& Key)
{
    return Key.IsValid() && Key != EKeys::AnyKey && !Key.IsGamepadKey() && !Key.IsModifierKey() && !Key.IsMouseButton()
        && !Key.IsAxis1D() && !Key.IsAxis2D() && !Key.IsAxis3D();
}


void UNotionKeyCommands::UpdatePlayerInput(UPlayerInput* PlayerInputRef, const FKeyBind& NewKeyBind)
{
    const int32 Index = PlayerInputRef->DebugExecBindings.IndexOfByPredicate([&](const FKeyBind& PlayerKeyBind)
        {
            return PlayerKeyBind.Command.Equals(NewKeyBind.Command, ESearchCase::IgnoreCase);
        });

    if (IsBindableKey(NewKeyBind.Key))
    {
        if (Index != INDEX_NONE)
        {
            PlayerInputRef->DebugExecBindings[Index] = NewKeyBind;
        }
        else
        {
            PlayerInputRef->DebugExecBindings.Add(NewKeyBind);
        }
    }
    else
    {
        if (Index != INDEX_NONE)
        {
            PlayerInputRef->DebugExecBindings.RemoveAt(Index);
        }
    }
}


FKeyBind UNotionKeyCommands::CreateUnrealKeyBinding(const FNotionKeyInfo& KeyInfo, const FString& Command)
{
    FKeyBind KeyBind;
    KeyBind.Command = Command;
    KeyBind.Key = KeyInfo.Key;
    KeyBind.bDisabled = false;

#define FILL_MODIFIER_DATA(KeyInfoProperty, BindProperty, BindIgnoreProperty)\
			if (KeyInfo.KeyInfoProperty == ECheckBoxState::Undetermined)\
			{\
				KeyBind.BindProperty = KeyBind.BindIgnoreProperty = false;\
			}\
			else\
			{\
				KeyBind.BindProperty = (KeyInfo.KeyInfoProperty == ECheckBoxState::Checked);\
				KeyBind.BindIgnoreProperty = !KeyBind.BindProperty;\
			}

    FILL_MODIFIER_DATA(Shift, Shift, bIgnoreShift);
    FILL_MODIFIER_DATA(Ctrl, Control, bIgnoreCtrl);
    FILL_MODIFIER_DATA(Alt, Alt, bIgnoreAlt);
    FILL_MODIFIER_DATA(Cmd, Cmd, bIgnoreCmd);

#undef FILL_MODIFIER_DATA

    return KeyBind;
}


void UNotionKeyCommands::SetKeyToCommand(const FNotionKeyInfo& KeyInfo, const TCHAR* CommandName)
{
    const FString& Command = CommandName;

    checkf(!Command.IsEmpty(), TEXT("Command is empty."));

    const FKeyBind KeyBind = CreateUnrealKeyBinding(KeyInfo, Command);
    //UPlayerInput* CopyPlayerInput = &(*GetMutableDefault<UPlayerInput>());

    if (UPlayerInput* CopyOfPlayerInput = &(*GetMutableDefault<UPlayerInput>()))
    {
        CopyOfPlayerInput->DebugExecBindings.Empty();
        CopyOfPlayerInput->DebugExecBindings.Add(KeyBind);
        CopyOfPlayerInput->InvertedAxis.Empty();
        CopyOfPlayerInput->InvertedAxis.Add(FName("NAME_None"));

        CopyOfPlayerInput->SaveConfig(CPF_Config, *GetMutableDefault<UPlayerInput>()->GetDefaultConfigFilename());
    }

}







