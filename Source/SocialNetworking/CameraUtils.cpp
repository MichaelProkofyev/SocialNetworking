#include "ProjectName.h"
#include "CameraUtils.h"


void ACameraUtils::GetCameraFrustumEdges(UCameraComponent* camera, FVector& topCenter, FVector& leftCenter, FVector& bottomCenter, FVector& rightCenter)
{
	// Assumptions: Camera is orthographic, Z axis is upwards, Y axis is right, X is forward

	FMinimalViewInfo cameraView;
	camera->GetCameraView(0.0f, cameraView);

	float width = cameraView.OrthoWidth;
	float height = width / cameraView.AspectRatio;

	topCenter.Set(cameraView.Location.X,
		cameraView.Location.Y,
		cameraView.Location.Z + height / 2.0f);

	bottomCenter.Set(cameraView.Location.X,
		cameraView.Location.Y,
		cameraView.Location.Z - height / 2.0f);

	leftCenter.Set(cameraView.Location.X,
		cameraView.Location.Y - width / 2.0f,
		cameraView.Location.Z);

	rightCenter.Set(cameraView.Location.X,
		cameraView.Location.Y + width / 2.0f,
		cameraView.Location.Z);

}