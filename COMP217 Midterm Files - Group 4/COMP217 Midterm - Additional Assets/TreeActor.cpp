// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeActor.h"

ATreeActor::ATreeActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ATreeActor::BeginPlay()
{
	Super::BeginPlay();

	if (Material)
	{
		Mesh->SetMaterial(0, Material);
	}

}

// Called every frame
void ATreeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}