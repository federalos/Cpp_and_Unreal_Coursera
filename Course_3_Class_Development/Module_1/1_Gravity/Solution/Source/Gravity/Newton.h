// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Newton.generated.h"

/**
 * A (fig) Newton
*/
UCLASS()
class GRAVITY_API ANewton : public AActor
{
	GENERATED_BODY()
	
private:
	UStaticMeshComponent* StaticMeshComponent;
	int Health = 50;

public:	
	/**
	 * Sets default values for this actor's properties
	*/
	ANewton();

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

	/**
	 * Called when the actor overlaps with an apple
	*/
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
