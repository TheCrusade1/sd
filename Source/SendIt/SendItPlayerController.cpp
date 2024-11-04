// Fill out your copyright notice in the Description page of Project Settings.

#include "SendItPlayerController.h"
#include "Characters\C_CH_CarBase.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void ASendItPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}

}

void ASendItPlayerController::Tick(float Delta)
{
	Super::Tick(Delta);


}

void ASendItPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// get a pointer to the controlled pawn
	VehicleCar = CastChecked<AC_CH_CarBase>(InPawn);
}
