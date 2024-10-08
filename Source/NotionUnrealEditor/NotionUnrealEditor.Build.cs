// Copyright (c) 2022 Damian Nowakowski. All rights reserved.

using UnrealBuildTool;

public class NotionUnrealEditor : ModuleRules
{
	public NotionUnrealEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateIncludePaths.Add("NotionUnrealEditor/Private");
		PrivateIncludePaths.Add("NotionUnreal/Private");

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"InputCore",
                "DeveloperToolSettings",
                "UnrealEd"
            }
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Engine",
				"CoreUObject",
                "Slate",
                "SlateCore",
				"WorkspaceMenuStructure",
				"DesktopPlatform",
                "Blutility",
                "UMG",
                "UMGEditor",
				"EditorStyle",
				"Projects"
			}
		);
	}
}
