// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEBLINDGAME_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
	// How far ahead of the player can we reach in cm
	UPROPERTY(EditAnywhere)
		float Reach = 100.f;

	UPhysicsHandleComponent* PhysicsHandle = nullptr; // Memory adress 0

	UInputComponent* InputComponent = nullptr;

	// Find (assumed) attached physics component
	void FindPhysicsHandleComponent();

	// Setup (assumed) attached input component
	void SetupInputComponent();

	// Ray-cast and grab what's in reach
	void Grab();

	// When the input is realeased
	void Release();

	// return hit for first physics body in reach
	const FHitResult GetFirstPhysicsBodyInReach();

	// returns the reach line START of our LINE TRACE
	FVector GetReachLineStart();

	// returns the reach line END of our LINE TRACE
	FVector GetReachLineEnd();
		
	
};
