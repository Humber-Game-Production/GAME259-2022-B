// Copyright Epic Games, Inc. All Rights Reserved.

#include "GroupB_ProductionsGameMode.h"
#include "GroupB_ProductionsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroupB_ProductionsGameMode::AGroupB_ProductionsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
