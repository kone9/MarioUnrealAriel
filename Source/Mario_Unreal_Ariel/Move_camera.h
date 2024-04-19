// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Move_camera.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MARIO_UNREAL_ARIEL_API UMove_camera : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMove_camera();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	AActor* pawn_first_character {nullptr};

private:
	AActor* owner_actor_root {nullptr};

	UPROPERTY(EditAnywhere)
	float positionCameraX{0};
	
	UPROPERTY(EditAnywhere)
	float positionCameraZ{0};
		
};
