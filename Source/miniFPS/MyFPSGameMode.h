// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "miniFPSGameMode.h"
#include "MyFPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MINIFPS_API AMyFPSGameMode : public AminiFPSGameMode
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
};
