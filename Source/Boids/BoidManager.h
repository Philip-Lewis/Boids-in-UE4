// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Boid.h"
#include "BoidManager.generated.h"

UCLASS()
class BOIDS_API ABoidManager : public AActor
{
	GENERATED_BODY()

	public:

		ABoidManager(const FObjectInitializer& ObjectInit);

		void BeginPlay();
		
		void UpdateBoids(float DeltaTime, ABoid* CurrentBoid);

		TArray<ABoid*> FindNeighbours(ABoid* FocusBoid);

		FVector CalculateSeperationDirection(TArray<ABoid*> Neighbours, ABoid* FocusBoid);
		FVector CalculateAlignmentDirection(TArray<ABoid*> Neighbours);
		FVector CalculateCohesionDirection(TArray<ABoid*> Neighbours, ABoid* FocusBoid);

		virtual void Tick(float DeltaSeconds) override;

		UPROPERTY(EditInstanceOnly)
		uint8 DefaultBoidCount;

		UPROPERTY(EditInstanceOnly)
		float DefaultBoidSpeed;

		UPROPERTY(EditInstanceOnly)
		float DefaultAwarenessRadius;

		UPROPERTY(EditInstanceOnly)
		bool bAreRulesAveraged;

		UPROPERTY(VisibleDefaultsOnly)
		uint8 CurrentBoidIndex;

		UPROPERTY(VisibleDefaultsOnly)
		FVector AverageBoidDirection;

		UPROPERTY(EditInstanceOnly)
		TSubclassOf<ABoid> BoidClass;
	
		UPROPERTY(VisibleAnywhere)
		TArray<ABoid*> SpawnedBoids;

		UPROPERTY(EditInstanceOnly)
		TArray<FVector> SpawnLocations;
};
