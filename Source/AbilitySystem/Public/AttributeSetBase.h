// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.generated.h"

class GameplayAttributeData;

/**
 *
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangedDelegate, float, Health, float, MaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnManaChangedDelegate, float, Mana, float, MaxMana);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStrengthChangedDelegate, float, Strength, float, MaxStrength);
UCLASS()
class ABILITYSYSTEM_API UAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()


public:
	UAttributeSetBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CAtegory = "AttributeSetBase")
		FGameplayAttributeData MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CAtegory = "AttributeSetBase")
		FGameplayAttributeData Mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CAtegory = "AttributeSetBase")
		FGameplayAttributeData MaxMana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CAtegory = "AttributeSetBase")
		FGameplayAttributeData Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CAtegory = "AttributeSetBase")
		FGameplayAttributeData MaxStrength;

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	FOnHealthChangedDelegate OnHealthChange;
	FOnManaChangedDelegate OnManaChange;
	FOnStrengthChangedDelegate OnStrengthChange;
};
