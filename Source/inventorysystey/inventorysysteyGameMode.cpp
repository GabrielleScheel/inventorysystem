// Copyright Epic Games, Inc. All Rights Reserved.

#include "inventorysysteyGameMode.h"
#include "inventorysysteyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AinventorysysteyGameMode::AinventorysysteyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
