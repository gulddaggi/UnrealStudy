// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPlayerController.h"

//���� �÷��̾� ��Ʈ�ѷ��� �����Ǵ� ���� �ľ�
void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

//���� ���� ���� �ľ�
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


