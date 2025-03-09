///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>

namespace fb {
	class UIContinuousAbilityBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIContinuousAbilityBuffEffectData"); }
		virtual ~UIContinuousAbilityBuffEffectData() override {}
		UIContinuousAbilityBuffEffectData() {
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_leftAbility = false;
			m_rightAbility = false;
			m_upAbility = false;
		};

		float m_minPowerThreshold; // 0x10 (16)
		float m_maxPowerThreshold; // 0x14 (20)
		bool m_leftAbility; // 0x18 (24)
		bool m_rightAbility; // 0x19 (25)
		bool m_upAbility; // 0x1A (26)
	}; // 0x20 (32)
}

