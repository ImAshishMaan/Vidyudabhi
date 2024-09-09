#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "VidyuAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class VIDYUDABHI_API UVidyuAnimInstance : public UAnimInstance {
	GENERATED_BODY()

public:

	UVidyuAnimInstance();
	
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	virtual void NativeInitializeAnimation() override;

protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animations")
	ACharacter* VidyuCharacter;
	
	UPROPERTY( BlueprintReadWrite, VisibleAnywhere, Category = "Animations")
	float Speed;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animations")
	bool bIsInAir;

	
};
