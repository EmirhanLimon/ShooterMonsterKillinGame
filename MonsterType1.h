// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MonsterType1.generated.h"

UCLASS()
class MONSTERKILLINGGAME_API AMonsterType1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonsterType1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	


private:
	UPROPERTY(EditDefaultsOnly)
	float Health = 100.f;
	UPROPERTY(EditDefaultsOnly)
	float Defense = 10;
	UPROPERTY(EditDefaultsOnly)
	float AttackPower = 10;

public:
	FORCEINLINE void SetHealth(float NewHealth) { Health = NewHealth; }
	FORCEINLINE float GetHealth() { return Health; }

	FORCEINLINE void SetDefense(float NewDefense) { Health = NewDefense; }
	FORCEINLINE float GetDefense() { return Defense; }

	FORCEINLINE void SetAttackPower(float NewAttackPower) { AttackPower = NewAttackPower; }
	FORCEINLINE float GetAttackPower() { return AttackPower; }
	

	};
