// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TDDLearning : ModuleRules
{
	public TDDLearning(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

		// AI dependancies
		PublicDependencyModuleNames.AddRange(new string[] { "AIModule", "GameplayTasks" });

		// UMG dependancies
		PublicDependencyModuleNames.AddRange(new string[] { "UMG", "Slate", "SlateCore" });

		// Automated tests dependancy
		PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
	}
}
