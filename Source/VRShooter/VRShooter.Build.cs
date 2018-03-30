using UnrealBuildTool;

public class VRShooter : ModuleRules
{
	public VRShooter(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AdvancedSessions", "VRExpansionPlugin" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
