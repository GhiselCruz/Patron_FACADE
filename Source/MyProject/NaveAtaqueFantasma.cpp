// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAtaqueFantasma.h"

// Sets default values
ANaveAtaqueFantasma::ANaveAtaqueFantasma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));

	mallaFantasma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
	mallaFantasma->SetStaticMesh(NaveMesh.Object);
	mallaFantasma->SetupAttachment(RootComponent);
	mallaFantasma->BodyInstance.SetCollisionProfileName("Escudo");
	RootComponent = mallaFantasma;

}

// Called when the game starts or when spawned
void ANaveAtaqueFantasma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAtaqueFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveAtaqueFantasma::Movimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La nave Fantasma esta en movimiento"));
}

void ANaveAtaqueFantasma::Ataque()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La nave Fantasma esta atacando"));
}

void ANaveAtaqueFantasma::HabilidadEspecial()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La nave Fantasma esta usando su habilidad especial"));
}

