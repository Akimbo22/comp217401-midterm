// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VillageActor.h"
#include "LampActor.generated.h"

/**
 * 
 */
UCLASS()
class COMP217MIDTERM_API ALampActor : public AVillageActor
{
	GENERATED_BODY()
	
public:
	ALampActor();

	UFUNCTION(BlueprintCallable)
	void Interact();

	UFUNCTION(BlueprintCallable)
	void UpdateAppearance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
