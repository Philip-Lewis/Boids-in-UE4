// Fill out your copyright notice in the Description page of Project Settings.

#include "Boid.h"


// Sets default values
ABoid::ABoid(const FObjectInitializer& ObjectInit)
	: Super(ObjectInit)
	, SceneRoot(ObjectInit.CreateDefaultSubobject<USceneComponent>(this, TEXT("BoidRootComponent")))
	, Arrow(ObjectInit.CreateDefaultSubobject<UArrowComponent>(this, TEXT("ArrowComponent")))
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetRootComponent(SceneRoot);
	Arrow->SetupAttachment(SceneRoot);
	Arrow->bHiddenInGame = false;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ABoid::BeginPlay()
{
	Super::BeginPlay();
	
}

