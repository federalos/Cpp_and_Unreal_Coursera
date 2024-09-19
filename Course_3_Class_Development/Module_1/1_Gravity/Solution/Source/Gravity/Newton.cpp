// Copyright A.T. Chamillard. All Rights Reserved.


#include "Newton.h"
#include "Apple.h"

/**
 * Sets default values
*/
ANewton::ANewton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ANewton::BeginPlay()
{
	Super::BeginPlay();
	
	// save static mesh component for efficiency
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		StaticMeshComponent = StaticMeshComponents[0];
	}

	// set up delegate for collisions with pickups
	StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ANewton::OnOverlapBegin);

	// use UE_LOG to print current health
	UE_LOG(LogTemp, Warning, TEXT("Health: %d"),
		Health);
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ANewton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Called when the pawn overlaps with a pickup
*/
void ANewton::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// if the other actor has an Apple gameplay tag,
	// use its getter to add its health value to Health
	// and destroy the other actor
	if (OtherActor != nullptr &&
		OtherActor->Tags.Contains("Apple"))
	{
		AApple* Apple = (AApple*)OtherActor;
		Health += Apple->GetHealthValue();
		OtherActor->Destroy();
	}

	// use UE_LOG to print current health
	UE_LOG(LogTemp, Warning, TEXT("Health: %d"),
		Health);
}
