///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementColor.h>
#include <fb/UIOptionKeyBindingsType.h>
#include <fb/UIOptionTableColumn.h>

namespace fb {
	class UIElementButtonStyle;
	class UIElementFillData;
	class UIElementFontStyle;
	class UIElementScrollbarStyle;
}

namespace fb {
	class UIOptionsKeybindingsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionsKeybindingsWidgetData"); }
		virtual ~UIOptionsKeybindingsWidgetData() override {}
		UIOptionsKeybindingsWidgetData() {
			m_headerHeight = 32.f;
			m_rowHeight = 32.f;
			m_autoScrollSpeed = 20.f;
			m_scrollBarWidth = 15;
			m_scrollBarMargin = 5;
		};

		String m_activationString; // 0x68 (104)
		String m_tabName; // 0x70 (112)
		UIElementColor m_headerFontColor; // 0x80 (128)
		Array<String> m_headers; // 0xA0 (160)
		CtrRef<UIElementFontStyle> m_headerFont; // 0xA8 (168)
		CtrRef<UIElementFillData> m_headerFill; // 0xB0 (176)
		float m_headerHeight; // 0xB8 (184)
		CtrRef<UIElementButtonStyle> m_rowButtonStyle; // 0xC0 (192)
		float m_rowHeight; // 0xC8 (200)
		float m_autoScrollSpeed; // 0xCC (204)
		u32 m_scrollBarWidth; // 0xD0 (208)
		u32 m_scrollBarMargin; // 0xD4 (212)
		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0xD8 (216)
		Array<UIOptionTableColumn> m_columns; // 0xE0 (224)
		Array<UIOptionKeyBindingsType> m_types; // 0xE8 (232)
	}; // 0xF0 (240)
}

