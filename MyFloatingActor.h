// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyFirstActor.h"
#include "MyFloatingActor.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTACTORS_API AMyFloatingActor : public AMyFirstActor
{
	GENERATED_BODY()
public :
	AMyFloatingActor();

	UPROPERTY(Editanywhere, Category = Movement)
	float speed;	
	UPROPERTY(Editanywhere, Category = Movement)
	float XValue;

	UPROPERTY(Editanywhere, Category = Movement)
	float YValue;
	UPROPERTY(Editanywhere, Category = Movement)
	float ZValue;

	float RunningTime;
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
};
