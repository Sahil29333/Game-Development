
#include "MyRotatingActor.h"


AMyRotatingActor::AMyRotatingActor()
{}

void AMyRotatingActor::AMyRotatingActor::Tick (float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FRotator NewRotation = GetActorRotation();
	NewRotation.Pitch += PitchValue;

	NewRotation.Yaw +=YawValue;
	NewRotation.Roll += RollValue;
	
	OR SIMPLER
	
	FRotator NewRotation = GetActorRotation().Add(PitchValue, YawValue, RollValue); */
	FQuat QuatRotation = FRotator(PitchValue, YawValue, RollValue).Quaternion();

	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);

	FRotator NewRotation = GetActorRotation().Add(PitchValue, YawValue, RollValue);
	SetActorRotation(NewRotation);
}
void AMyRotatingActor::BeginPlay() {

	Super::BeginPlay();
}
