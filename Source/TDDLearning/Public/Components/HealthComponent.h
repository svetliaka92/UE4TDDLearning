#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChanged, class UHealthComponent*, HealthComponent, bool, bIsAlive, float, Damage, float, CurrentHealth);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();

	float GetCurrentHealth() const { return Health; }
	float GetMaxHealth() const { return MaxHealth; }
	bool IsPlayerAlive() const { return bIsAlive; }
	UFUNCTION()
		void DealDamage(float Damage);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
		float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Health)
		bool bIsAlive;

	UFUNCTION()
		void HandleDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

private:
	UPROPERTY()
		float Health;
};
