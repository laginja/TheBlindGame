// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "PlayerControllerClass.generated.h"

/**
 * 
 */
UCLASS()
class THEBLINDGAME_API APlayerControllerClass : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaSeconds ) override;

private:
	APawn* GetControlledPawn();

	// Ray-cast and grab AI if in reach
	void Grab();

	// return hit for first physics body in reach
	const FHitResult GetFirstPhysicsBodyInReach();

	// returns the reach line START of our LINE TRACE
	FVector GetReachLineStart();

	// returns the reach line END of our LINE TRACE
	FVector GetReachLineEnd();

	// how far the player can reach with LINE TRACE in cm
	UPROPERTY(EditAnywhere)
	float Reach = 100.f;
};
