// Fill out your copyright notice in the Description page of Project Settings.

#include "BoidManager.h"

ABoidManager::ABoidManager(const FObjectInitializer& ObjectInit)
	: Super(ObjectInit)
{
	SetReplicates(true);
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void ABoidManager::BeginPlay()
{
	Super::BeginPlay();

	if (Role == ROLE_Authority)
	{
		for (uint8 i = 0; i < DefaultBoidCount; ++i)
		{
			uint8 mod = 5;

			if (UWorld* World = GetWorld())
			{
				FVector SpawnLocation;
				
				if (i < SpawnLocations.Num())
				{
					SpawnLocation = SpawnLocations[i];
				}
				else
				{
					if ((SpawnLocations.Num() - i) >= 0)
					{
						SpawnLocation = SpawnLocations[i];
					}
					else
					{
						SpawnLocation = FVector(0.0f, 0.0f, 0.0f);
					}
				}
				

				if (ABoid* NewBoid = World->SpawnActor<ABoid>(BoidClass, FTransform::Identity))
				{
					NewBoid->SetActorLocation(SpawnLocation);
					NewBoid->SetPreviousLocation(SpawnLocation);
					SpawnedBoids.Add(NewBoid);
				}
			}
		}
	}
}

void ABoidManager::UpdateBoids(float DeltaTime, ABoid* CurrentBoid)
{
	if (Role == ROLE_Authority)
	{
		float DistanceToTravel = DeltaTime * DefaultBoidSpeed;

		TArray<ABoid*> Neighbours = FindNeighbours(CurrentBoid);

		//Calculate directions for each rule
		FVector SeperationDirection = CalculateSeperationDirection(Neighbours, CurrentBoid);

		FVector AlignmentDirection = CalculateAlignmentDirection(Neighbours);

		FVector CohesionDirection = CalculateCohesionDirection(Neighbours, CurrentBoid);

		FVector TravelDirection = FVector(0.0f, 0.0f, 0.0f);
		if (bAreRulesAveraged)
		{
			//Find average direction of rules (assumes each rule is weighted the same) and then apply distance to travel
			TravelDirection.X = (((SeperationDirection.X + AlignmentDirection.X + CohesionDirection.X) / 3) * DistanceToTravel);
			TravelDirection.Y = (((SeperationDirection.Y + AlignmentDirection.Y + CohesionDirection.Y) / 3) * DistanceToTravel);
			TravelDirection.Z = (((SeperationDirection.Z + AlignmentDirection.Z + CohesionDirection.Z) / 3) * DistanceToTravel);
		}
		else
		{
			//apply each rule one at a time
			TravelDirection.X += (SeperationDirection.X * DistanceToTravel);
			TravelDirection.Y += (SeperationDirection.Y * DistanceToTravel);
			TravelDirection.Z += (SeperationDirection.Z * DistanceToTravel);

			TravelDirection.X += (AlignmentDirection.X * DistanceToTravel);
			TravelDirection.Y += (AlignmentDirection.Y * DistanceToTravel);
			TravelDirection.Z += (AlignmentDirection.Z * DistanceToTravel);

			TravelDirection.X += (CohesionDirection.X * DistanceToTravel);
			TravelDirection.Y += (CohesionDirection.Y * DistanceToTravel);
			TravelDirection.Z += (CohesionDirection.Z * DistanceToTravel);
		}

		//Preserve location before moving for use with alignment then move Boid
		FVector BoidCurrentLocation = CurrentBoid->GetActorLocation();

		CurrentBoid->SetPreviousLocation(BoidCurrentLocation);

		FVector* BoidNewLocation = new FVector(BoidCurrentLocation.X + TravelDirection.X, BoidCurrentLocation.Y + TravelDirection.Y, BoidCurrentLocation.Z + TravelDirection.Z);

		FHitResult* SweepResult = new FHitResult();

		CurrentBoid->SetActorLocation(*BoidNewLocation, false, SweepResult, ETeleportType::None);

		CurrentBoid->SetActorRotation(TravelDirection.ToOrientationRotator(), ETeleportType::None);
	}
}

void ABoidManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DeltaTimeSinceLastUpdate > DefaultUpdateDelay)
	{
		if (SpawnedBoids.Num() > 0)
		{
			if (SpawnedBoids.IsValidIndex(CurrentBoidIndex))
			{
				UpdateBoids(DeltaTimeSinceLastUpdate, SpawnedBoids[CurrentBoidIndex]);
			}
			
			CurrentBoidIndex = (CurrentBoidIndex + 1) % SpawnedBoids.Num();
		}

		DeltaTimeSinceLastUpdate = 0.0f;
	}
	else
	{
		DeltaTimeSinceLastUpdate += DeltaTime;
	}	
}

TArray<ABoid*> ABoidManager::FindNeighbours(ABoid* FocusBoid)
{
	TArray<ABoid*> Neighbours;

	for (uint8 i = 0; i < SpawnedBoids.Num(); ++i)
	{
		if (SpawnedBoids[i] != FocusBoid)
		{
			FVector distanceBetweenBoids = SpawnedBoids[i]->GetActorLocation() - FocusBoid->GetActorLocation();

			float radiusBetweenBoids = FMath::Sqrt((distanceBetweenBoids.X * distanceBetweenBoids.X) + (distanceBetweenBoids.Y * distanceBetweenBoids.Y));

			if(radiusBetweenBoids <= DefaultAwarenessRadius)
			{
				Neighbours.Add(SpawnedBoids[i]);
			}
		}
	}

	return Neighbours;
}

FVector ABoidManager::CalculateSeperationDirection(TArray<ABoid*> Neighbours, ABoid* FocusBoid)
{
	FVector NeighbourLocation = FVector(0.0f, 0.0f, 0.0f);
	FVector distance = FVector(0.0f, 0.0f, 0.0f);
	FVector direction = FVector(0.0f, 0.0f, 0.0f);
	float magnitude = 0.0f;

	for (uint8 i = 0; i < Neighbours.Num(); ++i)
	{
		distance = FocusBoid->GetActorLocation() - Neighbours[i]->GetActorLocation();

		magnitude = FMath::Sqrt((distance.X * distance.X) + (distance.Y * distance.Y) + (distance.Z * distance.Z));

		if (magnitude > 0)
		{
			direction.X += (distance.X / magnitude);
			direction.Y += (distance.Y / magnitude);
			direction.Z += (distance.Z / magnitude);
		}
	}

	if (Neighbours.Num() > 0)
	{
		direction.X = direction.X / Neighbours.Num();
		direction.Y = direction.Y / Neighbours.Num();
		direction.Z = direction.Z / Neighbours.Num();
	}

	return direction;
}

FVector ABoidManager::CalculateAlignmentDirection(TArray<ABoid*> Neighbours)
{
	FVector distance = FVector(0.0f, 0.0f, 0.0f);
	FVector direction = FVector(0.0f, 0.0f, 0.0f);
	float magnitude = 0.0f;

	for (uint8 i = 0; i < Neighbours.Num(); ++i)
	{
		distance = Neighbours[i]->GetActorLocation() - Neighbours[i]->GetPreviousLocation();

		magnitude = FMath::Sqrt((distance.X * distance.X) + (distance.Y * distance.Y) + (distance.Z * distance.Z));

		if (magnitude > 0)
		{
			direction.X += (distance.X / magnitude);
			direction.Y += (distance.Y / magnitude);
			direction.Z += (distance.Z / magnitude);
		}
	}

	return direction;
}

FVector ABoidManager::CalculateCohesionDirection(TArray<ABoid*> Neighbours, ABoid* FocusBoid)
{
	FVector distance = FVector(0.0f, 0.0f, 0.0f);
	FVector direction = FVector(0.0f, 0.0f, 0.0f);
	float magnitude = 0.0f;
	FVector AverageNeighbourPostion = FVector(0.0f, 0.0f, 0.0f);

	FVector CombinedNeighbourPostion = FVector(0.0f, 0.0f, 0.0f);
	for (uint8 i = 0; i < Neighbours.Num(); ++i)
	{
		CombinedNeighbourPostion.X += Neighbours[i]->GetActorLocation().X;
		CombinedNeighbourPostion.Y += Neighbours[i]->GetActorLocation().Y;
		CombinedNeighbourPostion.Z += Neighbours[i]->GetActorLocation().Z;
	}

	AverageNeighbourPostion.X = (CombinedNeighbourPostion.X / Neighbours.Num());
	AverageNeighbourPostion.Y = (CombinedNeighbourPostion.Y / Neighbours.Num());
	AverageNeighbourPostion.Z = (CombinedNeighbourPostion.Z / Neighbours.Num());

	distance.X = AverageNeighbourPostion.X - FocusBoid->GetActorLocation().X;
	distance.Y = AverageNeighbourPostion.Y - FocusBoid->GetActorLocation().Y;
	distance.Z = AverageNeighbourPostion.Z - FocusBoid->GetActorLocation().Z;

	magnitude = FMath::Sqrt((distance.X * distance.X) + (distance.Y * distance.Y) + (distance.Z * distance.Z));

	direction.X += (distance.X / magnitude);
	direction.Y += (distance.Y / magnitude);
	direction.Z += (distance.Z / magnitude);

	return direction;
}


