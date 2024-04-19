// Fill out your copyright notice in the Description page of Project Settings.


#include "Move_camera.h"

// Sets default values for this component's properties
UMove_camera::UMove_camera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	owner_actor_root = GetOwner();

	// ...
}


// Called when the game starts
void UMove_camera::BeginPlay()
{
	Super::BeginPlay();

	// ...
	 
	
}


// Called every frame
void UMove_camera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if( !IsValid(owner_actor_root)) return;;
	if( !IsValid(pawn_first_character)) return;;

	FVector actualPositionFirstPawnCharacter{ pawn_first_character->GetActorLocation() };

	if(actualPositionFirstPawnCharacter.Y > 798)
	{
		owner_actor_root->SetActorLocation( FVector( positionCameraX, actualPositionFirstPawnCharacter.Y, positionCameraZ ) );
	}

	
	
}

