// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using UnrealBuildTool.Rules;

public class SendIt : ModuleRules
{
	public SendIt(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
    }
}
