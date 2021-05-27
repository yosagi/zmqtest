// Copyright Epic Games, Inc. All Rights Reserved.

#include "zmqtestGameMode.h"
#include "zmqtestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AzmqtestGameMode::AzmqtestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
