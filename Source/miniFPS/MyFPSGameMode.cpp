// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFPSGameMode.h"

void AMyFPSGameMode::BeginPlay()
{
	Super::BeginPlay();

	//打印日志
	UE_LOG(LogTemp, Log, TEXT("hello Game Mode"));

	//hud
	GEngine->AddOnScreenDebugMessage(1, 5, FColor::Green, TEXT("hello Game Mode"));
}
