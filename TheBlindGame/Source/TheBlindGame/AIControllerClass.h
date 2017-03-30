// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "AIControllerClass.generated.h"

/**
 * 
 */
UCLASS()
class THEBLINDGAME_API AAIControllerClass : public AAIController
{
	GENERATED_BODY()
	
	
public:
	virtual void BeginPlay() override;

private:
	APawn* GetControlledPawn();
	APawn* GetPlayerPawn();
};
