// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boid.generated.h"


UCLASS()
class BOIDS_API ABoid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoid(const FObjectInitializer& ObjectInit);

	UPROPERTY(VisibleDefaultsOnly)
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleDefaultsOnly)
	UArrowComponent* Arrow;

private:
	UPROPERTY(VisibleDefaultsOnly)
	FVector PreviousLocation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	void SetPreviousLocation(FVector LocationValue) { PreviousLocation = LocationValue; }

	FVector GetPreviousLocation() { return PreviousLocation;}	
	
};
