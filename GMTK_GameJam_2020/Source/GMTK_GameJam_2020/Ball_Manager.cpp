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

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABall_Manager::ChangeActiveBalls,
                                    FMath::RandRange(2, 4), true);
}

// Called every frame
void ABall_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ABall_Manager::ChangeActiveBalls()
{
	for(int i=0; i<balls.Num(); i++)
	{
		if(!IsValid(balls[i]))
		{
			balls.RemoveAt(i);
			i--;
			for(int j = 0; j < active_ball_indices.Num(); j++)
			{
				if(active_ball_indices[j] == i)
				{
					active_ball_indices[j] = -1;
				}
				if(active_ball_indices[j] > i)
				{
					active_ball_indices[j]--;
				}
			}
		}
	}

	if(balls.Num() > 0)
	{
		for (int i=0; i < active_ball_indices.Num(); i++)
		{
			if(active_ball_indices[i] != -1 && balls[active_ball_indices[i]] != nullptr)
			{
				balls[active_ball_indices[i]]->Activate(false);
			}		
			int new_index;
			do
			{
				new_index = FMath::RandRange(0, balls.Num()-1);
			}
			while (balls.Num() > 1 && new_index == active_ball_indices[i]);
			active_ball_indices[i] = new_index;
			if(balls[active_ball_indices[i]] != nullptr)
			{
				balls[active_ball_indices[i]]->Activate(true);
			}	
		}
	}
}

