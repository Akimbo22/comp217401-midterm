// Fill out your copyright notice in the Description page of Project Settings.


#include "HouseActor.h"

AHouseActor::AHouseActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	// Window Light
	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	SpotLight->SetupAttachment(Root);
	SpotLight->Intensity = 2000.f;
	SpotLight->SetLightColor(FLinearColor::Yellow);
}

// Called when the game starts or when spawned
void AHouseActor::BeginPlay()
{
	Super::BeginPlay();

	if (Material)
	{
		Mesh->SetMaterial(0, Material);
	}

}

// Called every frame
void AHouseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}