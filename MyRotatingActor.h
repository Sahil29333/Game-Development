// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyFirstActor.h"
#include "MyRotatingActor.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTACTORS_API AMyRotatingActor : public AMyFirstActor
{
	GENERATED_BODY()



public:
	AMyRotatingActor();


	UPROPERTY(EditAnywhere, Category = Movement)
	float PitchValue;
	UPROPERTY(EditAnywhere, Category = Movement)
	float YawValue;
	UPROPERTY(EditAnywhere, Category = Movement)
	float RollValue;
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

};
