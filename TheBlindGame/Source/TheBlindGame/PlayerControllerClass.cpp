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

APawn * APlayerControllerClass::GetControlledPawn()
{
	return GetPawn();
}
