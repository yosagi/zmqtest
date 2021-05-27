// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class zmqtest : ModuleRules
{
	public zmqtest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "zmque", "zmqLibrary" });
		PrivateDependencyModuleNames.AddRange(new string[] { "zmqLibrary" });
	}
}
