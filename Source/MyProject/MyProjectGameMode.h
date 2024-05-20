// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EscuadronNavesFacade.h"
#include "MyProjectGameMode.generated.h"

UCLASS(MinimalAPI)
class AMyProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyProjectGameMode();
protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	AEscuadronNavesFacade* Escuadrones;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};



