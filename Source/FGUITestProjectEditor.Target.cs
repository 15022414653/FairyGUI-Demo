/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/

using UnrealBuildTool;
using System.Collections.Generic;

public class FGUITestProjectEditorTarget : TargetRules
{
	public FGUITestProjectEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "FGUITestProject" } );
	}
}
