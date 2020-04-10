// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.generated.h"

class GameplayAttributeData;

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangeDelegate, float, Health, float, MaxHealth);
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

    void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;

    FOnHealthChangeDelegate OnHealthChange;
};
