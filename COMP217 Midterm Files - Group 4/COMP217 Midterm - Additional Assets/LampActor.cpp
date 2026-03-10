// Fill out your copyright notice in the Description page of Project Settings.


#include "LampActor.h"

// Sets default values
ALampActor::ALampActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Root
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	// Static Mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	// Light
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	PointLight->SetupAttachment(Root);
	PointLight->Intensity = 5000.f;
	PointLight->SetLightColor(FLinearColor::Yellow);

	// Default Settings


}

// Called when the game starts or when spawned
void ALampActor::BeginPlay()
{
	Super::BeginPlay();

	DynamicMaterial = Mesh->CreateDynamicMaterialInstance(0);

}

// Called every frame
void ALampActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALampActor::Interact()
{
	UpdateAppearance();
}

void ALampActor::UpdateAppearance()
{
	if (PointLight->Intensity == 5000.f)
	{
		PointLight->Intensity = 0.f;
	}
	else
	{
		PointLight->Intensity = 5000.f;
	}
}