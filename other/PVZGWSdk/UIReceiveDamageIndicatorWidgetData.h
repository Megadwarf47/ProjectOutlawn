///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIReceiveDamageIndicatorWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIReceiveDamageIndicatorWidgetData"); }
		virtual ~UIReceiveDamageIndicatorWidgetData() override {}
		UIReceiveDamageIndicatorWidgetData() {
			m_displayTime = 1.f;
			m_displayTimeFullAlpha = 1.f;
			m_damageToOpacity = 1.f;
			m_phase1Duration = 0.05f;
			m_phase2Alpha = 0.3f;
		};

		float m_displayTime; // 0x68 (104)
		float m_displayTimeFullAlpha; // 0x6C (108)
		float m_damageToOpacity; // 0x70 (112)
		float m_phase1Duration; // 0x74 (116)
		float m_phase2Alpha; // 0x78 (120)
	}; // 0x80 (128)
}

