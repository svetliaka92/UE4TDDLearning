#include "Tests/HealthComponentTests.h"
#include "Misc/AutomationTest.h"
#include "Characters/TDDLearningCharacter.h"
#include "Components/HealthComponent.h"
#include "Tests/AutomationEditorCommon.h"


IMPLEMENT_SIMPLE_AUTOMATION_TEST(FSpawnPlayerTest, "Gameplay.Health.Player.Spawn Player", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::CriticalPriority | EAutomationTestFlags::ProductFilter);
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNegativePlayerHealthTest, "Gameplay.Health.Player.Health is never negative", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::MediumPriority | EAutomationTestFlags::ProductFilter);
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDecreaseHealthTest, "Gameplay.Health.Player.Apply Damage", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::CriticalPriority | EAutomationTestFlags::ProductFilter);
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCannotIncrementHealthTest, "Gameplay.Health.Player.Try to cheat and increase health", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::HighPriority | EAutomationTestFlags::ProductFilter);
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKillPlayerTest, "Gameplay.Health.Player.Kill player", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::CriticalPriority | EAutomationTestFlags::ProductFilter);


bool FSpawnPlayerTest::RunTest(const FString& Parameters)
{
	UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();
	{
		ATDDLearningCharacter* Hero = World->SpawnActor<ATDDLearningCharacter>();
		UHealthComponent* HealthComponent = Hero->GetHealthComponent();
		TestEqual(TEXT("Newly-spawned heroes must start at max health."), HealthComponent->GetCurrentHealth(), HealthComponent->GetMaxHealth());
		Hero->Destroy();
	}
	return true;
}


bool FNegativePlayerHealthTest::RunTest(const FString& Parameters)
{

	return true;
}


bool FDecreaseHealthTest::RunTest(const FString& Parameters)
{
	return true;
}


bool FCannotIncrementHealthTest::RunTest(const FString& Parameters)
{
	return true;
}


bool FKillPlayerTest::RunTest(const FString& Parameters)
{
	return true;
}
