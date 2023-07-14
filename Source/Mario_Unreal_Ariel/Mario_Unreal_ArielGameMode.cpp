// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mario_Unreal_ArielGameMode.h"
#include "Mario_Unreal_ArielCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMario_Unreal_ArielGameMode::AMario_Unreal_ArielGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
