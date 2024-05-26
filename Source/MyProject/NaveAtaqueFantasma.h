// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAtaqueFantasma.generated.h"

UCLASS()
class MYPROJECT_API ANaveAtaqueFantasma : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = mallaFantasma, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaFantasma;
	
public:	
	// Sets default values for this actor's properties
	ANaveAtaqueFantasma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Movimiento();
	void Ataque();
	void HabilidadEspecial();

	float VelocidadDiagonal;
	bool MovimientoVertical;
};
