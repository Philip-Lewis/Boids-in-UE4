// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BoidPlayerPawn.generated.h"

UCLASS()
class BOIDS_API ABoidPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoidPlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Test();

	UFUNCTION(Server, WithValidation, Reliable)
	void TestOnServer();
	bool TestOnServer_Validate() { return true; };

	UPROPERTY(ReplicatedUsing=OnRep_TestVal)
	int8 TestVal;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_TestVal();
};
