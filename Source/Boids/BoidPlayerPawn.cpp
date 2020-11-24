// Fill out your copyright notice in the Description page of Project Settings.

#include "BoidPlayerPawn.h"
#include "UnrealNetwork.h"

// Sets default values
ABoidPlayerPawn::ABoidPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ABoidPlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	if (GetNetMode() == ENetMode::NM_DedicatedServer)
	{
		TestVal = 10;
	}


	if (Role == ROLE_Authority)
	{
		UE_LOG(LogTemp, Log, TEXT("Began on server"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Began on client"));
	}
}

// Called every frame
void ABoidPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABoidPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("test"), IE_Pressed, this, &ABoidPlayerPawn::TestOnServer);
}

void ABoidPlayerPawn::Test()
{
	UE_LOG(LogTemp, Log, TEXT("Test Print"));
}

void ABoidPlayerPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(ABoidPlayerPawn, TestVal);
}

void ABoidPlayerPawn::OnRep_TestVal()
{
	UE_LOG(LogTemp, Log, TEXT("Test Val repped"));
}

void ABoidPlayerPawn::TestOnServer_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("Test Print On Server"));
}
