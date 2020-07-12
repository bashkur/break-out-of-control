// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"

#include "Castle.generated.h"

UCLASS()
class GMTK_GAMEJAM_2020_API ACastle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACastle();

	UPROPERTY(EditAnywhere)
    UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	USoundCue* SoundCue;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float HP;

	UFUNCTION()
    void OnBeginHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor,
                               class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	
	void Collapse();

	void RestartGame() const;

	UPROPERTY(EditAnywhere, Category= "UI HUD")
        TSubclassOf<UUserWidget> HP_Widget_Class;
	UUserWidget* HP_Widget;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CastleDamage(float damage);

	
};
