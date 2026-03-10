// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"
#include "VillageActor.generated.h"

UCLASS()
class COMP217MIDTERM_API AVillageActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVillageActor();

	// Components and Variables
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* PointLight;

	UPROPERTY(VisibleAnywhere)
	USpotLightComponent* SpotLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ActorRotation;

	UPROPERTY(VisibleAnywhere)
	UMaterialInstanceDynamic* DynamicMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UMaterialInterface* Material;


	// Setter/Getters
	void SetActorLocationCustom(FVector NewLocation);

	FVector GetActorLocationCustom() const;

	void SetActorRotationCustom(FRotator NewRotation);

	FRotator GetActorRotationCustom() const;

};
