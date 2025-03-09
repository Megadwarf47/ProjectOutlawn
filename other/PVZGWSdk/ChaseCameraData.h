///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TargetCameraData.h>
#include <fb/Vec3.h>

namespace fb {
	class ChaseCameraData : public TargetCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ChaseCameraData"); }
		virtual ~ChaseCameraData() override {}
		ChaseCameraData() {
			m_targetOffset = Vec3(0.f, 1.5f, 0.f);
			m_toWantedPositionScale = Vec3(300.f, 300.f, 300.f);
			m_targetRotationOffset = 0.f;
			m_maxViewRotationAngleDeg = 30.f;
			m_wantedAngleDeg = 25.f;
			m_wantedDistance = 4.f;
			m_maxDistance = 10.f;
			m_snapDistance = 20.f;
			m_resetDistance = 50.f;
			m_forceFieldRadius = 2.f;
			m_collisionRadius = 0.1f;
			m_forceFieldForceScale = 80.f;
			m_awayFromTargetForceScale = 100.f;
			m_velocityDrag = 25.f;
			m_maxVelocity = 9.5f;
			m_pillMinimumCollisionRadius = 0.5f;
			m_pillMaximumCollisionRadius = 1.5f;
			m_pillMinimumCollisionLength = 0.3f;
			m_pillExpandSizeSpeedAcceleration = 50.f;
			m_lookDistanceScale = 0.f;
			m_lookDistanceInFrontOfTarget = 0.f;
			m_updateRate = 200;
			m_keepTargetPitch = false;
			m_shouldRollWithTarget = false;
			m_inheritTargetVelocity = true;
			m_bypassChaseCalculations = false;
			m_hasCollisionAgainstTarget = false;
			m_ignoreCollisionInChaseCalculations = false;
			m_hasCollision = true;
		};

		Vec3 m_targetOffset; // 0xD0 (208)
		Vec3 m_toWantedPositionScale; // 0xE0 (224)
		float m_targetRotationOffset; // 0xF0 (240)
		float m_maxViewRotationAngleDeg; // 0xF4 (244)
		float m_wantedAngleDeg; // 0xF8 (248)
		float m_wantedDistance; // 0xFC (252)
		float m_maxDistance; // 0x100 (256)
		float m_snapDistance; // 0x104 (260)
		float m_resetDistance; // 0x108 (264)
		float m_forceFieldRadius; // 0x10C (268)
		float m_collisionRadius; // 0x110 (272)
		float m_forceFieldForceScale; // 0x114 (276)
		float m_awayFromTargetForceScale; // 0x118 (280)
		float m_velocityDrag; // 0x11C (284)
		float m_maxVelocity; // 0x120 (288)
		float m_pillMinimumCollisionRadius; // 0x124 (292)
		float m_pillMaximumCollisionRadius; // 0x128 (296)
		float m_pillMinimumCollisionLength; // 0x12C (300)
		float m_pillExpandSizeSpeedAcceleration; // 0x130 (304)
		float m_lookDistanceScale; // 0x134 (308)
		float m_lookDistanceInFrontOfTarget; // 0x138 (312)
		u32 m_updateRate; // 0x13C (316)
		bool m_keepTargetPitch; // 0x140 (320)
		bool m_shouldRollWithTarget; // 0x141 (321)
		bool m_inheritTargetVelocity; // 0x142 (322)
		bool m_bypassChaseCalculations; // 0x143 (323)
		bool m_hasCollisionAgainstTarget; // 0x144 (324)
		bool m_ignoreCollisionInChaseCalculations; // 0x145 (325)
		bool m_hasCollision; // 0x146 (326)
	}; // 0x150 (336)
}

