// Fill out your copyright notice in the Description page of Project Settings.

#include "TheBlindGame.h"
#include "PlayerControllerClass.h"



void APlayerControllerClass::BeginPlay()
{
	Super::BeginPlay();	// call default behavior before anything else

	UE_LOG(LogTemp, Warning, TEXT("I am the new player controller!"));

	// dissable camera from looking up or down
	PlayerCameraManager->ViewPitchMax = 0.0f;
	PlayerCameraManager->ViewPitchMin = -0.0f;
}
