///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class VehicleSpawnStateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleSpawnStateEntityData"); }
		virtual ~VehicleSpawnStateEntityData() override {}
		VehicleSpawnStateEntityData() {
			m_startupDelayModifier = 1.f;
			m_initialThrottle = 0.f;
			m_engineIndex = 0;
			m_initialRpmModifier = 0.f;
			m_heightOffset = 0.f;
			m_radius = 0.f;
		};

		float m_startupDelayModifier; // 0x18 (24)
		Vec3 m_initialVelocity; // 0x20 (32)
		float m_initialThrottle; // 0x30 (48)
		u32 m_engineIndex; // 0x34 (52)
		float m_initialRpmModifier; // 0x38 (56)
		float m_heightOffset; // 0x3C (60)
		float m_radius; // 0x40 (64)
	}; // 0x50 (80)
}

