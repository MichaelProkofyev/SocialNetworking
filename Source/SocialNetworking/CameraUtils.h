#pragma once

#include "Camera/CameraActor.h"
#include "CameraUtils.generated.h"

/**
*
*/
UCLASS()
class PROJECTNAME_API ACameraUtils : public ACameraActor
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintPure,
		meta = (
			DisplayName = "Get Camera Edges from Frustum",
			Keywords = "Camera Edges Frustum"
			),
		Category = "Camera|Utility")
		static void GetCameraFrustumEdges(UCameraComponent* camera, FVector& topCenter, FVector& leftCenter, FVector& bottomCenter, FVector& rightCenter);


};