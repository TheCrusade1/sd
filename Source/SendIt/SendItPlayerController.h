// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SendItPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SENDIT_API ASendItPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	/** Setup input actions and context mappings for player. */
	virtual void SetupInputComponent() override;

	/** Mapping context used for pawn control. */
	UPROPERTY()
	class UInputMappingContext* PawnMappingContext;

	/** Action to update location. */
	UPROPERTY()
	class UInputAction* MoveAction;
};
