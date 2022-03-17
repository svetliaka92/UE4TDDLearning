#include "Components/HealthComponent.h"


UHealthComponent::UHealthComponent()
{
	MaxHealth = 100.0f;
	Health = MaxHealth;
	bIsAlive = true;
}


void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();


}


void UHealthComponent::DealDamage(float Damage)
{
	if (Damage <= 0)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, MaxHealth);
}


void UHealthComponent::HandleDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{

}
