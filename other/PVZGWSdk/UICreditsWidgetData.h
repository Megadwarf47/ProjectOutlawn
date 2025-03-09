///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UICreditsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICreditsWidgetData"); }
		virtual ~UICreditsWidgetData() override {}
		UICreditsWidgetData() {
			m_scrollSpeed = 100.f;
			m_extraSpaceBetweenRows = 0.f;
			m_emptyRowHeight = 10.f;
			m_spaceBetweenColumns = 10.f;
			m_headerRowHeight = 18.f;
			m_titleRowHeight = 18.f;
			m_nameRowHeight = 18.f;
			m_leadsNameRowHeight = 18.f;
			m_startOffset = 0.f;
		};

		CtrRef<UIElementFontStyle> m_headerFontStyle; // 0x68 (104)
		CtrRef<UIElementFontStyle> m_titleFontStyle; // 0x70 (112)
		CtrRef<UIElementFontStyle> m_nameFontStyle; // 0x78 (120)
		CtrRef<UIElementFontStyle> m_leadsNameFontStyleLeft; // 0x80 (128)
		CtrRef<UIElementFontStyle> m_leadsNameFontStyleRight; // 0x88 (136)
		float m_scrollSpeed; // 0x90 (144)
		float m_extraSpaceBetweenRows; // 0x94 (148)
		float m_emptyRowHeight; // 0x98 (152)
		float m_spaceBetweenColumns; // 0x9C (156)
		float m_headerRowHeight; // 0xA0 (160)
		float m_titleRowHeight; // 0xA4 (164)
		float m_nameRowHeight; // 0xA8 (168)
		float m_leadsNameRowHeight; // 0xAC (172)
		float m_startOffset; // 0xB0 (176)
	}; // 0xB8 (184)
}

