// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class IceCreamCrush_PoCTTarget : TargetRules
{
	public IceCreamCrush_PoCTTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("IceCreamCrush_PoCT");
	}
}
