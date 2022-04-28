// Copyright Epic Games, Inc. All Rights Reserved.

#include "BisMigrateModifiedGameMode.h"
#include "BisMigrateModifiedCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABisMigrateModifiedGameMode::ABisMigrateModifiedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
