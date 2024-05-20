// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAtaqueAsalto.h"

// Sets default values
ANaveAtaqueAsalto::ANaveAtaqueAsalto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	mallaAsalto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
	mallaAsalto->SetStaticMesh(NaveMesh.Object);
	mallaAsalto->SetupAttachment(RootComponent);
	mallaAsalto->BodyInstance.SetCollisionProfileName("Escudo");
	RootComponent = mallaAsalto;


}

// Called when the game starts or when spawned
void ANaveAtaqueAsalto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAtaqueAsalto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveAtaqueAsalto::Movimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT(" Nave Asalto esta en movimiento"));
}

void ANaveAtaqueAsalto::Ataque()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT(" Nave Asalto esta atacando"));
}

void ANaveAtaqueAsalto::HabilidadEspecial()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT(" Nave Asalto esta usando su habilidad especial"));
}

