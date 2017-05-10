// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIControllerClass.h"
#include "AIMasterControllerClass.generated.h"

/**
 * 
 */
UCLASS()
class THEBLINDGAME_API AAIMasterControllerClass : public AAIControllerClass
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

private:
	APawn* GetControlledPawn();
		
};
