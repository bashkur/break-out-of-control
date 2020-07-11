// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"

// Sets default values
AEnemyManager::AEnemyManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TestMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Test Mesh"));
}

// Called when the game starts or when spawned
void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();
	for (int x = 0; x < rows; x++)
	{
		for (int y = 0; y < columns; y++)
		{
			Spawn(GetActorLocation() + FVector(y * verticalSpacing, (x - ((rows-1) * 0.5)) * horizontalSpacing, 0));
		}
	}
}

// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//spawn an actor
void AEnemyManager::Spawn(FVector position)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spawning!"));
	if (!Enemy)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Nothing to Spawn"));
	}
	UWorld* world = GetWorld();
	if (!world)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No World?"));
	}
	AActor * spawnedEnemy = world->SpawnActor(Enemy);
	spawnedEnemy->SetActorLocation(position);
}