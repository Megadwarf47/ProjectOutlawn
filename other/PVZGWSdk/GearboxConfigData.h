///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>

namespace fb {
	class GearboxConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GearboxConfigData"); }
		virtual ~GearboxConfigData() override {}
		GearboxConfigData() {
			m_gearboxType = 0;
			m_gearboxMode = 0;
			m_gearChangeTime = 0.0625f;
			m_gearDownSpeedFactor = 0.8f;
			m_oppositeDirGearChangeMaxSpeed = 50.f;
			m_oppositeDirGearChangeTime = 0.125f;
			m_clutchSpeedFactor = 10.f;
			m_transmissionEfficiency = 1.f;
			m_useAutoClutch = true;
			m_useClassicGearBoxAutoClutch = false;
			m_useNeutralGear = true;
		};

		Array<float> m_forwardGearRatios; // 0x10 (16)
		Array<float> m_forwardGearSpeeds; // 0x18 (24)
		Array<float> m_reverseGearRatios; // 0x20 (32)
		Array<float> m_reverseGearSpeeds; // 0x28 (40)
		s32 m_gearboxType; // 0x30 (48)
		s32 m_gearboxMode; // 0x34 (52)
		float m_gearChangeTime; // 0x38 (56)
		float m_gearDownSpeedFactor; // 0x3C (60)
		float m_oppositeDirGearChangeMaxSpeed; // 0x40 (64)
		float m_oppositeDirGearChangeTime; // 0x44 (68)
		float m_clutchSpeedFactor; // 0x48 (72)
		float m_transmissionEfficiency; // 0x4C (76)
		bool m_useAutoClutch; // 0x50 (80)
		bool m_useClassicGearBoxAutoClutch; // 0x51 (81)
		bool m_useNeutralGear; // 0x52 (82)
	}; // 0x58 (88)
}

