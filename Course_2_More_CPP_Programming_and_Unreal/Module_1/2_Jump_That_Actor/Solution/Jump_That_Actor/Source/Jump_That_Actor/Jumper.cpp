// Fill out your copyright notice in the Description page of Project Settings.


#include "Jumper.h"

/**
 * Sets default values
*/
AJumper::AJumper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AJumper::BeginPlay()
{
	Super::BeginPlay();

	// start the jump timer

	StartJumpTimer();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AJumper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Jumps the Actor
*/
void AJumper::Jump()
{
	// generate a random location to jump to
	FVector JumpLocation{ 0 };
	JumpLocation.SetComponentForAxis(EAxis::Y,
		FMath::RandRange(MinY, MaxY));
	JumpLocation.SetComponentForAxis(EAxis::Z,
		FMath::RandRange(MinZ, MaxZ));

	UE_LOG(LogTemp,Warning, TEXT("Jump"));
	// jump to new location
	SetActorLocation(JumpLocation);

	// restart the jump timer
	StartJumpTimer();
}

/**
 * Starts the jump timer
*/
void AJumper::StartJumpTimer()
{
	// start the timer
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AJumper::Jump, 1);

}