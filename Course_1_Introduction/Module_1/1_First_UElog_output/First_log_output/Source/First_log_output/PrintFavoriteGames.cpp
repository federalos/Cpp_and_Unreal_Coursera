// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintFavoriteGames.h"

/**
 * Sets default values
*/
APrintFavoriteGames::APrintFavoriteGames()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void APrintFavoriteGames::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Half-life"));
	UE_LOG(LogTemp, Warning, TEXT("Divinity: The original sin 2"));
	UE_LOG(LogTemp, Warning, TEXT("Portal"));
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void APrintFavoriteGames::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

