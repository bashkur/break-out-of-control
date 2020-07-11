// Fill out your copyright notice in the Description page of Project Settings.


#include "Castle.h"

#include "Ball.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACastle::ACastle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = MeshComponent;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &ACastle::OnBeginHit);

	HP = 100.0f;
}

// Called when the game starts or when spawned
void ACastle::BeginPlay()
{
	Super::BeginPlay();
	
    	if(HP_Widget_Class != nullptr)
    	{
    		HP_Widget = CreateWidget(GetWorld(), HP_Widget_Class);
    		HP_Widget->AddToViewport();
    	}

}

// Called every frame
void ACastle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(HP <= 0)
	{
		Collapse();
	}

	///DEBUG
	//CastleDamage(DeltaTime * 20.0f);
}

void ACastle::CastleDamage(float damage)
{
	HP -= damage;
}

void ACastle::Collapse()
{
	/*UE_LOG(LogTemp, Warning, TEXT("Game Over"));
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ACastle::RestartGame, 4.0f, false);*/
}

void ACastle::OnBeginHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
	UE_LOG(LogTemp, Warning, TEXT("Hit"));
	if(OtherActor->ActorHasTag("Ball"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Collided with"));
		ABall* OtherBall = Cast<ABall>(OtherActor);
		if(OtherBall->bIsActive)
		{
			CastleDamage(OtherBall->damage);
		}

		OtherActor->Destroy();
	}
}

void ACastle::RestartGame() const
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}


