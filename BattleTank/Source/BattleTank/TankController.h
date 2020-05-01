// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankController : public APlayerController
{
	GENERATED_BODY()
	
	void BeginPlay() override;
	
	ATank * GetControllerTank() const;
	
	void Tick(float DeltaTime) override;

private:

	// Start the tank moving the barrel so that the shot will hit 
	void AimTowardCrosshair();
	
};
