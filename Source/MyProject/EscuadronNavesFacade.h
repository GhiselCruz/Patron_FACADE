// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAtaqueCaza.h"
#include "NaveAtaqueAsalto.h"
#include "NaveAtaqueFantasma.h"
#include "EscuadronNavesFacade.generated.h"

UCLASS()
class MYPROJECT_API AEscuadronNavesFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscuadronNavesFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	ANaveAtaqueCaza* NaveCaza;
	ANaveAtaqueAsalto* NaveAsalto;
	ANaveAtaqueFantasma* NaveFantasma;

public:
	void MovimientoEscuadron();
	void AtaqueEscuadron();
	void HabilidadEspecialEscuadron();

};
