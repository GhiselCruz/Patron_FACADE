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
	
	//NaveCaza = GetWorld()->SpawnActor<ANaveAtaqueCaza>(FVector(0.0f, 0.0f, 200.0f), FRotator::ZeroRotator);
	//NaveFantasma = GetWorld()->SpawnActor<ANaveAtaqueFantasma>(FVector(0.0f, 300.0f, 200.0f), FRotator::ZeroRotator);
	//NaveAsalto = GetWorld()->SpawnActor<ANaveAtaqueAsalto>(FVector(0.0f, 800.0f, 200.0f), FRotator::ZeroRotator);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	FVector Posicion1 = FVector(-500, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	int a = 500;  //posicion en x
	int b = 300;   //posicion en y
	int c = 0;  //contador

	if (World != nullptr)
	{
		TArray<TSubclassOf<ANaveAtaqueCaza>> claseNave = { ANaveAtaqueCaza::StaticClass() };
		FVector InicialSpawnLocation = FVector(0.0f, 0.0f, 200.0f);

		for (int i = 0; i < 15; i++)
		{
			TSubclassOf<ANaveAtaqueCaza> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];

			FVector SpawnLocation = InicialSpawnLocation + FVector(a, b, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveAtaqueCaza* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveAtaqueCaza>(ClaseRandom, SpawnLocation, SpawnRotation);
			b = b + 200;
			c = c + 1;
			if (c == 5)
			{
				a = a + 200;
				b = 300;
				c = 0;
			}
		}


		int d = 1000;  //posicion en x
		int e = -300;   //posicion en y
		int f = 0;  //contador
		TArray<TSubclassOf<ANaveAtaqueAsalto>> claseNaves = { ANaveAtaqueAsalto::StaticClass() };
		FVector InicialSpawnLocationA = FVector(0.0f, 0.0f, 200.0f);

		for (int j = 0; j < 12; j++)
		{
			TSubclassOf<ANaveAtaqueAsalto> ClaseRandom = claseNaves[FMath::RandRange(0, claseNaves.Num() - 1)];

			FVector SpawnLocation = InicialSpawnLocationA + FVector(d, e, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveAtaqueAsalto* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveAtaqueAsalto>(ClaseRandom, SpawnLocation, SpawnRotation);
			e = e - 200;
			f = f + 1;
			if (f == 4)
			{
				d = d + 200;
				e = -300;
				f = 0;
			}
		}


		int x = -800;  //posicion en x
		int y = 150;   //posicion en y
		int z = 0;  //contador
		TArray<TSubclassOf<ANaveAtaqueFantasma>> clasesNaves = { ANaveAtaqueFantasma::StaticClass() };
		FVector InicialSpawnLocationF = FVector(0.0f, 0.0f, 200.0f);

		for (int k = 0; k < 9; k++)
		{
			TSubclassOf<ANaveAtaqueFantasma> ClaseRandom = clasesNaves[FMath::RandRange(0, clasesNaves.Num() - 1)];

			FVector SpawnLocation = InicialSpawnLocationF + FVector(x,y, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveAtaqueFantasma* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveAtaqueFantasma>(ClaseRandom, SpawnLocation, SpawnRotation);
			y = y - 200;
			z = z + 1;
			if (z == 3)
			{
				x = x + 200;
				y = 150;
				z = 0;
			}
		}


	}
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

