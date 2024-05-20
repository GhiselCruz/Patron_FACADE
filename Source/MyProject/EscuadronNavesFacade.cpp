// Fill out your copyright notice in the Description page of Project Settings.


#include "EscuadronNavesFacade.h"

// Sets default values
AEscuadronNavesFacade::AEscuadronNavesFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscuadronNavesFacade::BeginPlay()
{
	Super::BeginPlay();
	
	NaveCaza = GetWorld()->SpawnActor<ANaveAtaqueCaza>(FVector(0.0f, 0.0f, 200.0f), FRotator::ZeroRotator);
	NaveFantasma = GetWorld()->SpawnActor<ANaveAtaqueFantasma>(FVector(0.0f, 300.0f, 200.0f), FRotator::ZeroRotator);
	NaveAsalto = GetWorld()->SpawnActor<ANaveAtaqueAsalto>(FVector(0.0f, 800.0f, 200.0f), FRotator::ZeroRotator);
}

// Called every frame
void AEscuadronNavesFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscuadronNavesFacade::MovimientoEscuadron()
{
	NaveCaza->Movimiento();
	NaveFantasma->Movimiento();
	NaveAsalto->Movimiento();
}

void AEscuadronNavesFacade::AtaqueEscuadron()
{
	NaveCaza->Ataque();
	NaveFantasma->Ataque();
	NaveAsalto->Ataque();
}

void AEscuadronNavesFacade::HabilidadEspecialEscuadron()
{
	NaveCaza->HabilidadEspecial();
	NaveFantasma->HabilidadEspecial();
	NaveAsalto->HabilidadEspecial();
}

