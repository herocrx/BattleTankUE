// Fill out your copyright notice in the Description page of Project Settings.


#include "TankController.h"

void ATankController::BeginPlay()
{
    ATank * tankController = GetControllerTank();
    UE_LOG(LogTemp, Warning, TEXT("TankController name: %s"), *tankController->GetName());
};
	
ATank * ATankController::GetControllerTank() const
{
    ATank * tankPlayerController = Cast<ATank>(GetPawn());
    if(!tankPlayerController)
    {
        UE_LOG(LogTemp, Warning, TEXT("ATank is not in this function"));
    }
    return tankPlayerController;
}
