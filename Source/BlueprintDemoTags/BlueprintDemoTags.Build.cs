// Copyright Guy (Drakynfly) Lundvall. All Rights Reserved.

using UnrealBuildTool;

public class BlueprintDemoTags : ModuleRules
{
    public BlueprintDemoTags(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
                "Core",
                "GameplayTags"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new []
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore"
            }
        );
    }
}