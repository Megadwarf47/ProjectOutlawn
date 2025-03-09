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
	class VehicleCameraData : public TargetCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleCameraData"); }
		virtual ~VehicleCameraData() override {}
		VehicleCameraData() {
			m_moveToPosition = Vec3(0.f, 0.f, -4.f);
			m_moveToPositionSlopeFactor = Vec3(0.f, 5.f, 5.f);
			m_targetOffset = Vec3(0.f, 1.f, 2.f);
			m_rotationFactor = Vec3(32.f, 32.f, 32.f);
			m_positionFactor = 6.f;
			m_resetDistance = 30.f;
			m_fixedPosition = false;
			m_fixedAngleZ = false;
			m_useTerrainAdjustment = true;
		};

		Vec3 m_moveToPosition; // 0xD0 (208)
		Vec3 m_moveToPositionSlopeFactor; // 0xE0 (224)
		Vec3 m_targetOffset; // 0xF0 (240)
		Vec3 m_targetOffsetSlopeFactor; // 0x100 (256)
		Vec3 m_rotationFactor; // 0x110 (272)
		float m_positionFactor; // 0x120 (288)
		float m_resetDistance; // 0x124 (292)
		bool m_fixedPosition; // 0x128 (296)
		bool m_fixedAngleZ; // 0x129 (297)
		bool m_useTerrainAdjustment; // 0x12A (298)
	}; // 0x130 (304)
}

