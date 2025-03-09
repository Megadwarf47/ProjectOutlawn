///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UIAltitudeMeterWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAltitudeMeterWidgetData"); }
		virtual ~UIAltitudeMeterWidgetData() override {}
		UIAltitudeMeterWidgetData() {
			m_climbRateFactor = 1.f;
			m_climbRateOffsetX = 0;
			m_maxAltitude = 100;
			m_showClimbRate = false;
		};

		float m_climbRateFactor; // 0x68 (104)
		String m_climbRateTexture; // 0x70 (112)
		s32 m_climbRateOffsetX; // 0x78 (120)
		String m_altitudeBarTexture; // 0x80 (128)
		String m_altitudeBarBackgroundTexture; // 0x88 (136)
		u32 m_maxAltitude; // 0x90 (144)
		bool m_showClimbRate; // 0x94 (148)
	}; // 0x98 (152)
}

