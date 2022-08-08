/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/

using UnrealBuildTool;
using System.Collections.Generic;

public class FGUITestProjectTarget : TargetRules
{
	public FGUITestProjectTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "FGUITestProject" } );
    }
}
