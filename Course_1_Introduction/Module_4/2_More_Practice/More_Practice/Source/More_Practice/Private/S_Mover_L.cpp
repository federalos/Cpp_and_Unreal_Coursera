// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Mover_L.h"

/**
 * Sets default values
*/
AS_Mover_L::AS_Mover_L()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void AS_Mover_L::BeginPlay()
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

		// add code here to get actor moving
		StaticMesh->AddImpulse(FVector(0.0f, -100.0f, 0.0f));
	}
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AS_Mover_L::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

