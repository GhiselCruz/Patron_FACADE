// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAtaqueCaza.h"

// Sets default values
ANaveAtaqueCaza::ANaveAtaqueCaza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));

	mallaCaza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
	mallaCaza->SetStaticMesh(NaveMesh.Object);
	mallaCaza->SetupAttachment(RootComponent);
	mallaCaza->BodyInstance.SetCollisionProfileName("Escudo");
	RootComponent = mallaCaza;

	Velocidad = 10;  //velocidad del movimiento de la nave
	MovimientoDerecha = true;  //la nave comienza moviendose hacia arriba

}

// Called when the game starts or when spawned
void ANaveAtaqueCaza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAtaqueCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Movimiento horizontal de la nave
	FVector NuevaPosicion = GetActorLocation();
	float MovimientoX = Velocidad ;
	if (MovimientoDerecha)
	{
		NuevaPosicion.X += MovimientoX;
		SetActorLocation(NuevaPosicion);
	}
	else
	{
		NuevaPosicion.X -= MovimientoX;
		SetActorLocation(NuevaPosicion);
	}

	//Cambiar la direccion si la nave alcanza los limites
	if (NuevaPosicion.X > 1200 || NuevaPosicion.X < 400)
	{
		MovimientoDerecha = !MovimientoDerecha;
	}
}

void ANaveAtaqueCaza::Movimiento()
{
	//Velocidad = 500;
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave caza esta en Movimiento"));
}

void ANaveAtaqueCaza::Ataque()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave caza esta atacando"));
}

void ANaveAtaqueCaza::HabilidadEspecial()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave caza esta usando su habilidad especial"));
}

