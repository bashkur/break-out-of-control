// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball_Manager.h"
#include "Ball.h"

// Sets default values
ABall_Manager::ABall_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABall_Manager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABall_Manager::ChangeActiveBalls,
                                    FMath::RandRange(2, 4), true);	
}

void ABall_Manager::ChangeActiveBalls()
{
	for (int i=0; i < active_ball_indices.Num(); i++)
	{
		balls[active_ball_indices[i]]->Activate(false);
		int new_index = FMath::RandRange(0, balls.Num()-1);
		while (new_index == active_ball_indices[i])
		{
			new_index = FMath::RandRange(0, balls.Num()-1);
		}
		balls[new_index]->Activate(true);
	}
}

