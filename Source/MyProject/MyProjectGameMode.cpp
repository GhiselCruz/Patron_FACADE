// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectGameMode.h"
#include "EscuadronNavesFacade.h"
#include "MyProjectPawn.h"

AMyProjectGameMode::AMyProjectGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AMyProjectPawn::StaticClass();
}

void AMyProjectGameMode::BeginPlay()
{
	Super::BeginPlay();
	Escuadrones = GetWorld()->SpawnActor<AEscuadronNavesFacade>(AEscuadronNavesFacade::StaticClass());
	Escuadrones->MovimientoEscuadron();
	Escuadrones->AtaqueEscuadron();
	Escuadrones->HabilidadEspecialEscuadron();
}

void AMyProjectGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

