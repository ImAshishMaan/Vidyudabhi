#include "VidyuAnimInstance.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UVidyuAnimInstance::UVidyuAnimInstance() {
	Speed = 0.0f;
	bIsInAir = false;
	
}

void UVidyuAnimInstance::NativeUpdateAnimation(float DeltaSeconds) {
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(!VidyuCharacter) return;

	if(VidyuCharacter) {
		Speed = VidyuCharacter->GetVelocity().Size();

		bIsInAir = VidyuCharacter->GetCharacterMovement()->IsFalling();
	}
}

void UVidyuAnimInstance::NativeInitializeAnimation() {
	Super::NativeInitializeAnimation();

	VidyuCharacter = Cast<ACharacter>(TryGetPawnOwner());
	
}
