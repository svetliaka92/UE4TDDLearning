// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameMode/TDDLearningGameMode.h"
#include "Characters/TDDLearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATDDLearningGameMode::ATDDLearningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
