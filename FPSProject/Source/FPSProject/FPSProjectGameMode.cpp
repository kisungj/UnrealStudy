// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameMode.h"
#include "FPSProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSProjectGameMode::AFPSProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
