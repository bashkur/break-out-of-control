// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball_Manager.generated.h"

UCLASS()
class GMTK_GAMEJAM_2020_API ABall_Manager : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABall_Manager();

	UPROPERTY(EditAnywhere)
    TArray<int> active_ball_indices;

	UPROPERTY(EditAnywhere)
    TArray<class ABall*> balls;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Randomly changes which ball(s) is active
	void ChangeActiveBalls();

};
