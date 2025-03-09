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

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
	class UIElementTableStyle;
}

namespace fb {
	class UIAvailableSquadsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAvailableSquadsWidgetData"); }
		virtual ~UIAvailableSquadsWidgetData() override {}
		UIAvailableSquadsWidgetData() {
			m_rowHeight = 24;
			m_cellSpacing = 1;
			m_killsCellWidth = 32;
			m_deathsCellWidth = 32;
			m_scoreCellWidth = 64;
			m_scrollbarWidth = 0;
			m_scrollbarMargin = 5;
			m_squadPlayersIconWidth = 26.f;
		};

		u32 m_rowHeight; // 0x68 (104)
		CtrRef<UIElementFontStyle> m_font; // 0x70 (112)
		UIElementColor m_selectedSquadDisabledColor; // 0x80 (128)
		CtrRef<UIElementFontStyle> m_fontLocalSquad; // 0xA0 (160)
		CtrRef<UIElementFontStyle> m_selectedRowFontLocalSquad; // 0xA8 (168)
		CtrRef<UIElementFontStyle> m_selectedRowFontNoFocusLocalSquad; // 0xB0 (176)
		CtrRef<UIElementTableStyle> m_tableStyle; // 0xB8 (184)
		u32 m_cellSpacing; // 0xC0 (192)
		u32 m_killsCellWidth; // 0xC4 (196)
		u32 m_deathsCellWidth; // 0xC8 (200)
		u32 m_scoreCellWidth; // 0xCC (204)
		CtrRef<UIElementFillData> m_selectedRowFill; // 0xD0 (208)
		CtrRef<UIElementFontStyle> m_selectedRowFont; // 0xD8 (216)
		CtrRef<UIElementFillData> m_selectedRowFillNoFocus; // 0xE0 (224)
		CtrRef<UIElementFontStyle> m_selectedRowFontNoFocus; // 0xE8 (232)
		u32 m_scrollbarWidth; // 0xF0 (240)
		u32 m_scrollbarMargin; // 0xF4 (244)
		CtrRef<UIElementFillData> m_listBackgroundFill; // 0xF8 (248)
		float m_squadPlayersIconWidth; // 0x100 (256)
	}; // 0x110 (272)
}

