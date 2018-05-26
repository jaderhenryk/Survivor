// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Survivor.h"
#include "SurvivorGameMode.h"
#include "SurvivorHUD.h"
#include "Player/FirstPersonCharacter.h"

ASurvivorGameMode::ASurvivorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASurvivorHUD::StaticClass();
}
