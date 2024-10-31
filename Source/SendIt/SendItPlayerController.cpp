// Fill out your copyright notice in the Description page of Project Settings.

#include "SendItPlayerController.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include <EnhancedInputComponent.h>
#include "Characters/C_CH_CarBase.h"

void ASendItPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Create these objects here and anot in constructor because we only need them on the client.
	PawnMappingContext = NewObject<UInputMappingContext>(this);

	MoveAction = NewObject<UInputAction>(this);
	
	//VECTOR3D
	//MoveAction->ValueType = EInputActionValueType::Axis3D;
	
	//FLOAT
	//MoveAction->ValueType = EInputActionValueType::Axis1D;
	//PawnMappingContext->MapKey(MoveAction, EKeys::W);

	
}

