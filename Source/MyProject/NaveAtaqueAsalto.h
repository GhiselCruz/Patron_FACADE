// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAtaqueAsalto.generated.h"

UCLASS()
class MYPROJECT_API ANaveAtaqueAsalto : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = mallaAsalto, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaAsalto;
	
public:	
	// Sets default values for this actor's properties
	ANaveAtaqueAsalto();

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

	float Velocidad;
	bool MovimientoA;

};
