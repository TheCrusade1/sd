// Fill out your copyright notice in the Description page of Project Settings.


#include "MGameMode.h"

#include "SendItPlayerController.h"

AMGameMode::AMGameMode()
{
	PlayerControllerClass = ASendItPlayerController::StaticClass();
}
