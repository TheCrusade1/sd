// Fill out your copyright notice in the Description page of Project Settings.


#include "C_CH_CarBase.h"
#include "SendIt\SendItPlayerController.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "ChaosVehicleMovementComponent.h"

#define LOCTEXT_NAMESPACE "VehicleCar"

DEFINE_LOG_CATEGORY(LogTemplateVehicle);

AC_CH_CarBase::AC_CH_CarBase()
{
	// construct the front camera boom
	FrontSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	FrontSpringArm->SetupAttachment(RootComponent);
	FrontSpringArm->TargetArmLength = 600;
	FrontSpringArm->SetRelativeLocation(FVector(0, 0, 140));
	FrontSpringArm->SetRelativeRotation(FRotator(-10, 0, 0));

	FrontCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FrontCamera->SetupAttachment(FrontSpringArm);

	// Configure the car mesh
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetCollisionProfileName(FName("Vehicle"));

	// get the Chaos Wheeled movement component
	ChaosVehicleMovement = CastChecked<UChaosWheeledVehicleMovementComponent>(GetVehicleMovement());
}

void AC_CH_CarBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// throttle 
		EnhancedInputComponent->BindAction(ThrottleAction, ETriggerEvent::Triggered, this, &AC_CH_CarBase::Throttle);
		EnhancedInputComponent->BindAction(ThrottleAction, ETriggerEvent::Completed, this, &AC_CH_CarBase::Throttle);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AC_CH_CarBase::Tick(float Delta)
{
	Super::Tick(Delta);

	// add some angular damping if the vehicle is in midair
	bool bMovingOnGround = ChaosVehicleMovement->IsMovingOnGround();
	GetMesh()->SetAngularDamping(bMovingOnGround ? 0.0f : 3.0f);

}

void AC_CH_CarBase::Throttle(const FInputActionValue& Value)
{
	// get the input magnitude for the throttle
	float ThrottleValue = Value.Get<float>();

	// add the input
	ChaosVehicleMovement->SetThrottleInput(ThrottleValue);

}


#undef LOCTEXT_NAMESPACE