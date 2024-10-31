// Fill out your copyright notice in the Description page of Project Settings.


#include "C_CH_CarBase.h"
#include "SendIt\SendItPlayerController.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosVehicleMovementComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Engine/Engine.h"



AC_CH_CarBase::AC_CH_CarBase()
{
	SpringArmC = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmC->SetupAttachment(RootComponent);
	SpringArmC->TargetArmLength = 600;
	SpringArmC->SetRelativeLocation(FVector(0, 0, 140));
	SpringArmC->SetRelativeRotation(FRotator(-10, 0, 0));

	CameraC = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraC->SetupAttachment(SpringArmC);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

	MoveScale = 1.f;
}

void AC_CH_CarBase::BeginPlay()
{
	Super::BeginPlay();

	
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem< UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(CarMappingContext, 0);
		}
	}
}

void AC_CH_CarBase::Move(const FInputActionValue& Value)
{
	const float DirectionValue = Value.Get<float>();

	const float ThrottleValue = DirectionValue;

	GetVehicleMovementComponent()->SetThrottleInput(ThrottleValue);

	UE_LOG(LogTemp, Warning, TEXT("Value %f"), ThrottleValue);
}

void AC_CH_CarBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AC_CH_CarBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AC_CH_CarBase::Move);
	}
}

