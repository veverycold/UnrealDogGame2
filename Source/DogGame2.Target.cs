// Dog Game, Copyright VeveryCold. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DogGame2Target : TargetRules
{
    public DogGame2Target(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

        ExtraModuleNames.AddRange(new string[] { "DogGame2" });
    }
}
