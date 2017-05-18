// Fill out your copyright notice in the Description page of Project Settings.

#include "TheBlindGame.h"
#include "AIMasterControllerClass.h"


void AAIMasterControllerClass::BeginPlay()
{
	Super::BeginPlay();	// call default behavior before anything else

	auto AIPawn = GetControlledPawn();

	//UE_LOG(LogTemp, Warning, TEXT("AI MasterController possesing: %s"), *(AIPawn->GetName()));

}

APawn * AAIMasterControllerClass::GetControlledPawn()
{
	return GetPawn();
}



