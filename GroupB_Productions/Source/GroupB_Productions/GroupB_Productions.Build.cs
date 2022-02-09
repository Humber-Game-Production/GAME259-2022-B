// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GroupB_Productions : ModuleRules
{
	public GroupB_Productions(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
