// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "IceCreamAndCrush2GameMode.h"
#include "IceCreamAndCrush2Character.h"
#include "UObject/ConstructorHelpers.h"

AIceCreamAndCrush2GameMode::AIceCreamAndCrush2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
