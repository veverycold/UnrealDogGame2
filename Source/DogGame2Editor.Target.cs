// Dog Game, Copyright VeveryCold. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DogGame2EditorTarget : TargetRules
{
    public DogGame2EditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

        ExtraModuleNames.AddRange(new string[] { "DogGame2" });
    }
}
