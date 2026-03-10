// Fill out your copyright notice in the Description page of Project Settings.


#include "VillageActor.h"

FVector AVillageActor::GetActorLocationCustom() const
{
	return GetActorLocation();
}

void AVillageActor::SetActorLocationCustom(FVector NewLocation)
{
	SetActorLocation(NewLocation);
}

