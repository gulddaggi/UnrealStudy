// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPlayerController.h"

//폰과 플레이어 컨트롤러가 생성되는 시점 파악
void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

//빙의 진행 시점 파악
void AABPlayerController::Possess(APawn * aPawn)
{
	ABLOG_S(Warning);
	Super::Possess(aPawn);
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

}


