// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootTarget.h"
#include "MyGameState.h"
// Sets default values
AShootTarget::AShootTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShootTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

void AShootTarget::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	Destroy();

	Cast<AMyGameState>(GetWorld()->GetGameState())->Score++;
	UE_LOG(LogTemp, Warning, TEXT("Successed Hit :%d"), Cast<AMyGameState>(GetWorld()->GetGameState())->Score);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Successed Hit : %d"), Cast<AMyGameState>(GetWorld()->GetGameState())->Score));
	
}

// Called every frame
void AShootTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

