// Copyright A.T. Chamillard. All Rights Reserved.

#include "BallActor.h"

/**
 * Sets default values
*/
ABallActor::ABallActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ABallActor::BeginPlay()
{
	Super::BeginPlay();
	
	// get the static mesh components for the ball
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		UStaticMeshComponent* StaticMesh = StaticMeshComponents[0];

		// add impulse force to mesh
		StaticMesh->AddImpulse(ImpulseForce);
	}

	PrintMessage();
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ABallActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Sets the impulse force
 * @param Force
*/
void ABallActor::SetImpulseForce(FVector Force)
{
	ImpulseForce = Force;
}

/**
 * Prints a class-specific message
*/
void ABallActor::PrintMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("I'm a white ball!"));
}