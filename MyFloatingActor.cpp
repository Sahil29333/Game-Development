// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFloatingActor.h"

AMyFloatingActor::AMyFloatingActor()
{}

void AMyFloatingActor::AMyFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.X += DeltaHeight * XValue;
	NewLocation.Y += DeltaHeight * YValue;
	NewLocation.Z += DeltaHeight * ZValue;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
	
}
void AMyFloatingActor::BeginPlay() {

	Super::BeginPlay();
}
