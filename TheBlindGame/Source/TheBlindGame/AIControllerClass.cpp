// Fill out your copyright notice in the Description page of Project Settings.

#include "TheBlindGame.h"
#include "AIControllerClass.h"


void AAIControllerClass::BeginPlay()
{
	Super::BeginPlay();	// call default behavior before anything else

	auto AIPawn = GetControlledPawn();
	auto PlayerPawn = GetPlayerPawn();

	UE_LOG(LogTemp, Warning, TEXT("AI Controller possesing: %s"), *(AIPawn->GetName()));
	UE_LOG(LogTemp, Warning, TEXT("AI Controller looking at: %s"), *(PlayerPawn->GetName()));

}

APawn * AAIControllerClass::GetControlledPawn()
{
	return GetPawn();
}

APawn * AAIControllerClass::GetPlayerPawn()
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	return PlayerPawn;
}

