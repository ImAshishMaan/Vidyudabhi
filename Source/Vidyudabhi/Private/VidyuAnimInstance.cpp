#include "VidyuAnimInstance.h"

#include "GameFramework/Character.h"

UVidyuAnimInstance::UVidyuAnimInstance() {
	Speed = 0.0f;
	
}

void UVidyuAnimInstance::NativeUpdateAnimation(float DeltaSeconds) {
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(!VidyuCharacter) return;

	if(VidyuCharacter) {
		Speed = VidyuCharacter->GetVelocity().Size();
	}
}

void UVidyuAnimInstance::NativeInitializeAnimation() {
	Super::NativeInitializeAnimation();

	VidyuCharacter = Cast<ACharacter>(TryGetPawnOwner());
	
}
