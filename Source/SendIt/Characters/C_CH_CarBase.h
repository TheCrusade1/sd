// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "InputActionValue.h"
#include "C_CH_CarBase.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class SENDIT_API AC_CH_CarBase : public AWheeledVehiclePawn
{
	GENERATED_BODY()

public:
	AC_CH_CarBase();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USpringArmComponent* SpringArmC;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCameraComponent* CameraC;

	/** Bind input actions from player controller. */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//void PrintVectorToScreen(const FVector& Vector, float DisplayTime, FColor Color);

	/** Handle input to update location. */
	//void Move(const struct FInputActionValue& ActionValue);

	/** Use floating pawn movement to smooth out motion. */
	UPROPERTY(EditAnywhere)
	class UFloatingPawnMovement* Movement;

	/** Scale to apply to location input. */
	UPROPERTY(EditAnywhere)
	float MoveScale;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* CarMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;

	void Move(const FInputActionValue& Value);

	void Tick(float DeltaTime);

private:



};
