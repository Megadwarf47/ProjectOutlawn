///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>

namespace fb {
	class ResetAbilityBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ResetAbilityBuffEffectData"); }
		virtual ~ResetAbilityBuffEffectData() override {}
		ResetAbilityBuffEffectData() {
			m_cooldown = 0.f;
			m_leftAbility = false;
			m_rightAbility = false;
			m_upAbility = false;
		};

		float m_cooldown; // 0x10 (16)
		bool m_leftAbility; // 0x14 (20)
		bool m_rightAbility; // 0x15 (21)
		bool m_upAbility; // 0x16 (22)
	}; // 0x18 (24)
}

