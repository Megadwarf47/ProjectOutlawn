///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TargetCameraData.h>
#include <fb/Vec2.h>

namespace fb {
	class PVZCameraData : public TargetCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCameraData"); }
		virtual ~PVZCameraData() override {}
		PVZCameraData() {
			m_targetOffset = Vec2(0.f, 1.5f);
			m_targetVerticalOffset = 0.f;
			m_targetRotationOffset = 0.f;
			m_maxViewRotationAngleDeg = 30.f;
			m_wantedAngleDeg = 25.f;
			m_cameraCollisionRayLength = 3.f;
			m_cameraCollisionPointOffset = 0.5f;
			m_cameraCollisionRayOffset = 0.1f;
			m_cameraCollisionRayExpandSpeed = 125.f;
			m_cameraPositionUpdateSpeed = 1.f;
			m_cameraPositionReferenceDistance = 10.f;
			m_cameraPositionMinSnapDistance = 20.f;
			m_lookDistanceScale = 0.f;
			m_lookDistanceInFrontOfTarget = 0.f;
			m_occlusionMinDistance = 0.5f;
			m_keepTargetPitch = false;
			m_shouldRollWithTarget = false;
			m_shouldIgnoreCharacterCollision = false;
			m_ignorePitch = false;
		};

		Vec2 m_targetOffset; // 0xD0 (208)
		float m_targetVerticalOffset; // 0xD8 (216)
		float m_targetRotationOffset; // 0xDC (220)
		float m_maxViewRotationAngleDeg; // 0xE0 (224)
		float m_wantedAngleDeg; // 0xE4 (228)
		float m_cameraCollisionRayLength; // 0xE8 (232)
		float m_cameraCollisionPointOffset; // 0xEC (236)
		float m_cameraCollisionRayOffset; // 0xF0 (240)
		float m_cameraCollisionRayExpandSpeed; // 0xF4 (244)
		float m_cameraPositionUpdateSpeed; // 0xF8 (248)
		float m_cameraPositionReferenceDistance; // 0xFC (252)
		float m_cameraPositionMinSnapDistance; // 0x100 (256)
		float m_lookDistanceScale; // 0x104 (260)
		float m_lookDistanceInFrontOfTarget; // 0x108 (264)
		float m_occlusionMinDistance; // 0x10C (268)
		bool m_keepTargetPitch; // 0x110 (272)
		bool m_shouldRollWithTarget; // 0x111 (273)
		bool m_shouldIgnoreCharacterCollision; // 0x112 (274)
		bool m_ignorePitch; // 0x113 (275)
	}; // 0x120 (288)
}

