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

	Velocidad = 500;
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

}

void ANaveAtaqueCaza::Movimiento(float DeltaTime)
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

