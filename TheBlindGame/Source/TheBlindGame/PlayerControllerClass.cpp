// Fill out your copyright notice in the Description page of Project Settings.

#include "TheBlindGame.h"
#include "PlayerControllerClass.h"



void APlayerControllerClass::BeginPlay()
{
	Super::BeginPlay();	// call default behavior before anything else

	auto PlayerPawn = GetControlledPawn();

	UE_LOG(LogTemp, Warning, TEXT("Player Controller possesing: %s"), *(PlayerPawn->GetName()));

	// dissable camera from looking up or down
	PlayerCameraManager->ViewPitchMax = 0.0f;
	PlayerCameraManager->ViewPitchMin = -0.0f;

	
}

void APlayerControllerClass::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Grab();
}

APawn * APlayerControllerClass::GetControlledPawn()
{
	return GetPawn();
}

void APlayerControllerClass::Grab()
{
	auto HitResult = GetFirstPhysicsBodyInReach();
	auto ActorHit = HitResult.GetActor();

	// If we hit the chicken with our LINE TRACE
	if (ActorHit)
	{
		// Grab the chicken
		UE_LOG(LogTemp, Warning, TEXT("We got the chicken!"));
	}
}

const FHitResult APlayerControllerClass::GetFirstPhysicsBodyInReach()
{
	/// Line-trace (Ray-cast) out to reach distance
	FHitResult HitResult;
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(
		OUT HitResult,
		GetReachLineStart(),
		GetReachLineEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParameters
	);
	return HitResult;
}

FVector APlayerControllerClass::GetReachLineStart()
{
	/// Get player view point this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation,
		OUT PlayerViewPointRotation
	);

	return PlayerViewPointLocation;
}

FVector APlayerControllerClass::GetReachLineEnd()
{
	/// Get player view point this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation,
		OUT PlayerViewPointRotation
	);
	return PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;
}
