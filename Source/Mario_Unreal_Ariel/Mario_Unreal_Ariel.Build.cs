// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mario_Unreal_Ariel : ModuleRules
{
	public Mario_Unreal_Ariel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
