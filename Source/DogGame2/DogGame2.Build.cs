// Dog Game. Copyright VeveryCold. All Rights Reserved.

using UnrealBuildTool;

public class DogGame2 : ModuleRules
{
    public DogGame2(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" });

        PublicIncludePaths.AddRange(new string[] { "DogGame2" });

        if (Target.Configuration != UnrealTargetConfiguration.Shipping)
        {
            PublicDependencyModuleNames.Add("FunctionalTesting");
        }
    }
}
