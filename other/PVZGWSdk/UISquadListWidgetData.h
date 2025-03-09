///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementLineStyle.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UISquadListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISquadListWidgetData"); }
		virtual ~UISquadListWidgetData() override {}
		UISquadListWidgetData() {
			m_rowHeight = 30.f;
			m_voipIconOffsetX = 5.f;
			m_kitIconOffsetX = 20.f;
			m_playerNameOffsetX = 35.f;
			m_squadLeaderIconOffsetX = 60.f;
			m_decorationLineLength = 15.f;
			m_squadBarOffsetX = 0.f;
			m_squadBarOffsetY = 0.f;
			m_commanderStatusOffsetX = 0.f;
			m_commanderStatusOffsetY = 0.f;
		};

		float m_rowHeight; // 0x68 (104)
		float m_voipIconOffsetX; // 0x6C (108)
		UIElementColor m_unavailabilityColor; // 0x70 (112)
		UIElementLineStyle m_decorationLineStyle; // 0x90 (144)
		UIElementLineStyle m_selectionCrossLineStyle; // 0xC0 (192)
		float m_kitIconOffsetX; // 0xF0 (240)
		float m_playerNameOffsetX; // 0xF4 (244)
		float m_squadLeaderIconOffsetX; // 0xF8 (248)
		CtrRef<UIElementFontStyle> m_playerFont; // 0x100 (256)
		float m_decorationLineLength; // 0x108 (264)
		float m_squadBarOffsetX; // 0x10C (268)
		float m_squadBarOffsetY; // 0x110 (272)
		float m_commanderStatusOffsetX; // 0x114 (276)
		float m_commanderStatusOffsetY; // 0x118 (280)
	}; // 0x120 (288)
}

