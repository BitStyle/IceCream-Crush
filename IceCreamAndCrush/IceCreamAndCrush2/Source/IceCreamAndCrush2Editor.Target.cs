// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class IceCreamAndCrush2EditorTarget : TargetRules
{
	public IceCreamAndCrush2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("IceCreamAndCrush2");
	}
}
