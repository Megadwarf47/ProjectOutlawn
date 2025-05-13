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
	class UITitanScoringInfoWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITitanScoringInfoWidgetData"); }
		virtual ~UITitanScoringInfoWidgetData() override {}
		UITitanScoringInfoWidgetData() {
			m_pulseInterval = 1.f;
		};

		String m_shipBarTexture; // 0x68 (104)
		String m_shipBarFillTexture; // 0x70 (112)
		float m_pulseInterval; // 0x78 (120)
		String m_team1CarrierHealthPercentProperty; // 0x80 (128)
		String m_team1CarrierStateProperty; // 0x88 (136)
		String m_team1CrateAStateProperty; // 0x90 (144)
		String m_team1CrateBStateProperty; // 0x98 (152)
		String m_team2CarrierHealthPercentProperty; // 0xA0 (160)
		String m_team2CarrierStateProperty; // 0xA8 (168)
		String m_team2CrateAStateProperty; // 0xB0 (176)
		String m_team2CrateBStateProperty; // 0xB8 (184)
	}; // 0xC0 (192)
}

