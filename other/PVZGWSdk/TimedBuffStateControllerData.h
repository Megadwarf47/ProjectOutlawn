///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZBuffStateControllerData.h>
#include <fb/RefArray.h>

namespace fb {
	class BuffStateModifierData;
}

namespace fb {
	class TimedBuffStateControllerData : public PVZBuffStateControllerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TimedBuffStateControllerData"); }
		virtual ~TimedBuffStateControllerData() override {}
		TimedBuffStateControllerData() {
			m_introTime = 0.f;
			m_introStartPower = 0.f;
			m_introEndPower = 1.f;
			m_duration = 0.f;
			m_applicationLimit = -1;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_minPower = 0.f;
			m_maxPower = 1.f;
			m_baseDecayRate = 1.f;
			m_movementDecayRate = 0.f;
			m_outroTime = 0.f;
			m_outroStartPower = 1.f;
			m_outroEndPower = 0.f;
		};

		float m_introTime; // 0x20 (32)
		float m_introStartPower; // 0x24 (36)
		float m_introEndPower; // 0x28 (40)
		float m_duration; // 0x2C (44)
		RefArray<BuffStateModifierData> m_durationModifiers; // 0x30 (48)
		s32 m_applicationLimit; // 0x38 (56)
		float m_minPowerThreshold; // 0x3C (60)
		float m_maxPowerThreshold; // 0x40 (64)
		float m_minPower; // 0x44 (68)
		float m_maxPower; // 0x48 (72)
		float m_baseDecayRate; // 0x4C (76)
		float m_movementDecayRate; // 0x50 (80)
		float m_outroTime; // 0x54 (84)
		float m_outroStartPower; // 0x58 (88)
		float m_outroEndPower; // 0x5C (92)
	}; // 0x60 (96)
}

