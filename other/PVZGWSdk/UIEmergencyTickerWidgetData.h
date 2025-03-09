///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UIEmergencyTickerWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIEmergencyTickerWidgetData"); }
		virtual ~UIEmergencyTickerWidgetData() override {}
		UIEmergencyTickerWidgetData() {
			m_scrollingSpeed = 0.f;
			m_startFreezeTime = 3.f;
			m_endFreezeTime = 2.f;
		};

		float m_scrollingSpeed; // 0x68 (104)
		float m_startFreezeTime; // 0x6C (108)
		UIElementColor m_warningTriangleColor; // 0x70 (112)
		UIElementColor m_boostIconColor; // 0x90 (144)
		float m_endFreezeTime; // 0xB0 (176)
	}; // 0xC0 (192)
}

