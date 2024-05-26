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


	//VelocidadDiagonal = 1.0f;  //velocidad del movimiento de la nave
	//MovimientoVertical = true;  //la nave comienza moviendose hacia la derecha

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


	//Movimiento Vertical de la nave
	/*FVector PosicionO;
	if (!PosicionO.IsZero())
	{
		PosicionO = GetActorLocation();
	}
	FVector NuevaPosicionF = GetActorLocation() + FVector(5.0f, 5.0f, 0.0f);
	float MovimientoY = VelocidadDiagonal;
	if (MovimientoVertical)
	{
		NuevaPosicionF.Y += MovimientoY;
		
	}
	else
	{
		NuevaPosicionF.Y -= MovimientoY;
	}
	SetActorLocation(NuevaPosicionF);

	//Cambiar la direccion si la nave alcanza los limites
	if (NuevaPosicionF.Y >1500 || NuevaPosicionF.Y < -1500)
	{
		MovimientoVertical = !MovimientoVertical;
		SetActorLocation(PosicionO);
	}*/

	//FVector PosicionOriginal;
	//FVector PosicionActual;

	// Lógica de inicialización de la posición original
	/*if (PosicionOriginal.IsZero()) {
		PosicionOriginal = GetActorLocation();
	}

	// Lógica de movimiento de la nave
	FVector Movimiento = FVector(5.0f, 5.0f, 0.0f) * VelocidadDiagonal;

	if (MovimientoVertical) {
		PosicionActual = GetActorLocation() + Movimiento;
	}
	else {
		PosicionActual = GetActorLocation() - Movimiento;
	}

	SetActorLocation(PosicionActual);

	// Cambiar la dirección si la nave alcanza los límites
	if (PosicionActual.Y > 1200 || PosicionActual.Y < -600) {
		MovimientoVertical = !MovimientoVertical;

		// Devolver la nave a la posición original
		SetActorLocation(PosicionOriginal);
	}*/
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

