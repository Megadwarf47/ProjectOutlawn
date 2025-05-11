///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIAbilityCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAbilityCompData"); }
		virtual ~UIAbilityCompData() override {}
		UIAbilityCompData() {
			m_defaultRechargeDelay = 0.25f;
			m_reloadMessageThreshold = 10;
		};

		float m_defaultRechargeDelay; // 0x30 (48)
		s32 m_reloadMessageThreshold; // 0x34 (52)
	}; // 0x38 (56)
}

