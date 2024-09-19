// Copyright A.T. Chamillard. All Rights Reserved.


#include "TeddyBear.h"


/**
 * Sets default values
*/
ATeddyBear::ATeddyBear()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ATeddyBear::BeginPlay()
{
	Super::BeginPlay();
	
	// get the static mesh components for the blueprint
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		UStaticMeshComponent* StaticMesh = StaticMeshComponents[0];

		// generate a force vector with random y and z components
		float yForce = FMath::RandRange(200.0f, 300.0f);
		if (FMath::RandRange(0.0f, 1.0f) < 0.5)
		{
			yForce *= -1;
		}
		float zForce = FMath::RandRange(200.0f, 300.0f);
		if (FMath::RandRange(0.0f, 1.0f) < 0.5)
		{
			zForce *= -1;
		}
		FVector ForceVector{ 0, yForce, zForce };

		// get teddy bear moving
		StaticMesh->AddImpulse(ForceVector);
	}
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATeddyBear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

