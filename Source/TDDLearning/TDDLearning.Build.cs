// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TDDLearning : ModuleRules
{
	public TDDLearning(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
