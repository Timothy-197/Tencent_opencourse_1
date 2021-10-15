// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class trial_1 : ModuleRules
{
	public trial_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
