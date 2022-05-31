// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitHubTestGameMode.h"
#include "GitHubTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitHubTestGameMode::AGitHubTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
