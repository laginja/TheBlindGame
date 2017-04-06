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

};
