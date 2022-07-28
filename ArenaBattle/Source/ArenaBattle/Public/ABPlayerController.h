// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AABPlayerController();

	virtual void PostInitializeComponents() override;
	virtual void Possess(APawn* aPawn) override; //4.22버전부터는 OnPossess로 변경. 사용방법은 동일.
	
	class UABHUDWidget* GetHUDWidget() const;
	void NPCKill(class AABCharacter* KiiledNPC) const;
	void AddGameScore() const;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABHUDWidget> HUDWidgetClass;

private:
	UPROPERTY()
		class UABHUDWidget* HUDWidget;

	UPROPERTY()
		class AABPlayerState* ABPlayerState;

};
