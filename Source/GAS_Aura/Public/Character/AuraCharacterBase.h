//  QQ 1286103642

//预处理指令，确保头文件只被包含一次。
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

//宏，声明这是一个抽象类，不能直接实例化。
UCLASS(Abstract)
class GAS_AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
