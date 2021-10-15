// Copyright Epic Games, Inc. All Rights Reserved.

#include "trial_1GameMode.h"
#include "trial_1HUD.h"
#include "trial_1Character.h"
#include "UObject/ConstructorHelpers.h"

Atrial_1GameMode::Atrial_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atrial_1HUD::StaticClass();
}
