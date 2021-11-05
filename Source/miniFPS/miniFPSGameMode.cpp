// Copyright Epic Games, Inc. All Rights Reserved.

#include "miniFPSGameMode.h"
#include "miniFPSHUD.h"
#include "miniFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AminiFPSGameMode::AminiFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AminiFPSHUD::StaticClass();
}
