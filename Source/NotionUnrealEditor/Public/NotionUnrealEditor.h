// Copyright (c) 2022 Damian Nowakowski. All rights reserved.

#pragma once

#include "NotionUnrealEditorBase.h"
#include "NotionUnrealEditor.generated.h"

/**
 * Editor object which handles all of the logic of the Plugin.
 */

UCLASS()
class NOTIONUNREALEDITOR_API UNotionUnrealEditor : public UNotionUnrealEditorBase
{

	GENERATED_BODY()

public:

	// UNotionUnrealEditorBase implementation
	void Init() override;

};
