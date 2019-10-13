// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class IceCreamCrush_PoCTEditorTarget : TargetRules
{
	public IceCreamCrush_PoCTEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("IceCreamCrush_PoCT");
	}
}
