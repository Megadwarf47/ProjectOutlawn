///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Boost.h>
#include <fb/DataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class EngineConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EngineConfigData"); }
		virtual ~EngineConfigData() override {}
		EngineConfigData() {
			m_rpmMin = 0.f;
			m_rpmMax = 10000.f;
			m_rpmCut = 9500.f;
			m_enginePowerMultiplier = 1.f;
			m_internalAccelerationFactor = 0.5f;
			m_internalDeaccelerationFactor = 0.5f;
			m_maxReverseSpeed = 10000.f;
			m_maxVehicleHeightOffset = 0.f;
		};

		Array<float> m_rpmCurvePoints; // 0x10 (16)
		Array<float> m_torqueCurvePoints; // 0x18 (24)
		Vec3 m_position; // 0x20 (32)
		float m_rpmMin; // 0x30 (48)
		float m_rpmMax; // 0x34 (52)
		float m_rpmCut; // 0x38 (56)
		float m_enginePowerMultiplier; // 0x3C (60)
		float m_internalAccelerationFactor; // 0x40 (64)
		float m_internalDeaccelerationFactor; // 0x44 (68)
		float m_maxReverseSpeed; // 0x48 (72)
		Boost m_boost; // 0x4C (76)
		float m_maxVehicleHeightOffset; // 0x64 (100)
	}; // 0x70 (112)
}

