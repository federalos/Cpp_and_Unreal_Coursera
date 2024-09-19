// Copyright A.T. Chamillard. All Rights Reserved.


#include "TeddyBearManager.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

/**
 * Sets default values
*/
ATeddyBearManager::ATeddyBearManager()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Set this pawn to be controlled by the lowest-numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

/**
 * Called when the game starts or when spawned
*/
void ATeddyBearManager::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATeddyBearManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Called to bind functionality to input
*/
void ATeddyBearManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// This time, you're using PlayerInputComponent (the parameter) because 
	// we're in a pawn, not in a player controller (where we use InputComponent)

	// check player input component
	check(PlayerInputComponent);

	// bind the spawn teddy bear action, when the button is released,
	// to the SpawnTeddyBear function
	PlayerInputComponent->BindAction("SpawnTeddyBear",
		EInputEvent::IE_Released, this,
		&ATeddyBearManager::SpawnTeddyBear);

	// bind the destroy teddy bear action, when the button is released,
	// to the DestroyTeddyBear function
	PlayerInputComponent->BindAction("DestroyTeddyBear",
		EInputEvent::IE_Released, this,
		&ATeddyBearManager::DestroyTeddyBear);
}

/**
 * Spawns a teddy bear
*/
void ATeddyBearManager::SpawnTeddyBear()
{
	// generate random spawn location
	FVector SpawnLocation{ 0 };
	SpawnLocation.SetComponentForAxis(EAxis::Y,
		FMath::RandRange(MinSpawnY, MaxSpawnY));
	SpawnLocation.SetComponentForAxis(EAxis::Z,
		FMath::RandRange(MinSpawnZ, MaxSpawnZ));

	// spawn the teddy bear
	GetWorld()->SpawnActor<ATeddyBear>(
		UGreenTeddyBear, SpawnLocation,
		FRotator::ZeroRotator);
}

/**
* Destroys a teddy bear
*/
void ATeddyBearManager::DestroyTeddyBear()
{
	// try to find teddy bears with tag
	TArray<AActor*> TeddyBears;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "TeddyBear", TeddyBears);

	// destroy first teddy bear in TArray
	if (TeddyBears.Num() > 0)

	{
		TeddyBears[0]->Destroy();
	}
}