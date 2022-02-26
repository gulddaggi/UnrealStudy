// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

UCLASS()
class ARENABATTLE_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override; // override가 없어도 정상적으로 작동 가능. 상속관계를 나타내기 위해 사용. 컴파일 에러 방지 목적
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *Body;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent *Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent *Splash;

	UPROPERTY(EditAnywhere, Category=ID)
	int32 ID;

	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;
	
	UPROPERTY(VisibleAnywhere)
	URotatingMovementComponent* Movement;
	


};
