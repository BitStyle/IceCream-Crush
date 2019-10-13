// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "IceCreamCrush_PoCTGameMode.h"
#include "IceCreamCrush_PoCTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIceCreamCrush_PoCTGameMode::AIceCreamCrush_PoCTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
