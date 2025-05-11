///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZBuffStateControllerData.h>

namespace fb {
	class WeaponAmmoBuffStateControllerData : public PVZBuffStateControllerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponAmmoBuffStateControllerData"); }
		virtual ~WeaponAmmoBuffStateControllerData() override {}
		WeaponAmmoBuffStateControllerData() {
			m_introTime = 0.f;
			m_introStartPower = 0.f;
			m_introEndPower = 1.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_minPower = 0.f;
			m_maxPower = 1.f;
			m_outroTime = 0.f;
			m_outroStartPower = 1.f;
			m_outroEndPower = 0.f;
		};

		float m_introTime; // 0x20 (32)
		float m_introStartPower; // 0x24 (36)
		float m_introEndPower; // 0x28 (40)
		float m_minPowerThreshold; // 0x2C (44)
		float m_maxPowerThreshold; // 0x30 (48)
		float m_minPower; // 0x34 (52)
		float m_maxPower; // 0x38 (56)
		float m_outroTime; // 0x3C (60)
		float m_outroStartPower; // 0x40 (64)
		float m_outroEndPower; // 0x44 (68)
	}; // 0x48 (72)
}

