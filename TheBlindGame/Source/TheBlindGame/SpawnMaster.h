// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "SpawnMaster.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSpawnMasterEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEBLINDGAME_API USpawnMaster : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpawnMaster();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UPROPERTY(BlueprintAssignable)
	FSpawnMasterEvent PlayerPassedTrigger;
	
private:

};
