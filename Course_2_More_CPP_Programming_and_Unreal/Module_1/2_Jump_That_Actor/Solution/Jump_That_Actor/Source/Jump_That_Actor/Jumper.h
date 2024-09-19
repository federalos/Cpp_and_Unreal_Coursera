// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jumper.generated.h"

/**
 *
*/
UCLASS()
class JUMP_THAT_ACTOR_API AJumper : public AActor
{
	GENERATED_BODY()
private:
	// jump bounds
	float MinY = -155;
	float MaxY = 44;
	float MinZ = 29;
	float MaxZ = 92;

	/**
	 * Starts the jump timer
	*/
	void StartJumpTimer();
public:
	/**
	 * Jumps the Actor
	*/
	UFUNCTION()
	void Jump();
public:	
	/**
	 * Sets default values for this actor's properties
	*/
	AJumper();

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:	
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation 
	*/
	virtual void Tick(float DeltaTime) override;

};
