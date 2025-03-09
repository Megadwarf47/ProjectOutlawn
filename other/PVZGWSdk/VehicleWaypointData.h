///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WaypointData.h>

namespace fb {
	class VehicleWaypointData : public WaypointData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleWaypointData"); }
		virtual ~VehicleWaypointData() override {}
		VehicleWaypointData() {
			m_speed = -666.f;
			m_speedOverrideMovingTowards = -666.f;
			m_speedLimitOnReached = -666.f;
			m_speedLimitMovingTowards = -666.f;
			m_angleoffset = 0.f;
			m_waitHere = 0.f;
			m_stoppingDeceleration = 0.f;
			m_minSlowdownSpeed = 1.f;
			m_stopHereRadius = 1.f;
			m_stopHere = false;
		};

		float m_speed; // 0x20 (32)
		float m_speedOverrideMovingTowards; // 0x24 (36)
		float m_speedLimitOnReached; // 0x28 (40)
		float m_speedLimitMovingTowards; // 0x2C (44)
		float m_angleoffset; // 0x30 (48)
		float m_waitHere; // 0x34 (52)
		float m_stoppingDeceleration; // 0x38 (56)
		float m_minSlowdownSpeed; // 0x3C (60)
		float m_stopHereRadius; // 0x40 (64)
		bool m_stopHere; // 0x44 (68)
	}; // 0x48 (72)
}

