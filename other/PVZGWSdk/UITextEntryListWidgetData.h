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
#include <fb/UIInputAction.h>

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
	class UIElementScrollbarStyle;
}

namespace fb {
	class UITextEntryListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITextEntryListWidgetData"); }
		virtual ~UITextEntryListWidgetData() override {}
		UITextEntryListWidgetData() {
			m_scrollSpeed = 10.f;
			m_scrollBarWidth = 15;
			m_scrollBarMargin = 5;
			m_entryHeight = 32;
			m_rowSpacing = 0;
			m_headerHeight = 32;
			m_scrollUpAction = UIInputAction::UIInputAction_NavigateRUp;
			m_scrollDownAction = UIInputAction::UIInputAction_NavigateRDown;
		};

		float m_scrollSpeed; // 0x68 (104)
		u32 m_scrollBarWidth; // 0x6C (108)
		UIElementColor m_entryFontColor; // 0x70 (112)
		UIElementColor m_headerFontColor; // 0x90 (144)
		u32 m_scrollBarMargin; // 0xB0 (176)
		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0xB8 (184)
		Array<String> m_entries; // 0xC0 (192)
		u32 m_entryHeight; // 0xC8 (200)
		CtrRef<UIElementFillData> m_entryRowFill; // 0xD0 (208)
		CtrRef<UIElementFontStyle> m_entryFontStyle; // 0xD8 (216)
		u32 m_rowSpacing; // 0xE0 (224)
		String m_header; // 0xE8 (232)
		u32 m_headerHeight; // 0xF0 (240)
		CtrRef<UIElementFillData> m_headerRowFill; // 0xF8 (248)
		CtrRef<UIElementFontStyle> m_headerFontStyle; // 0x100 (256)
		UIInputAction m_scrollUpAction; // 0x108 (264)
		UIInputAction m_scrollDownAction; // 0x10C (268)
	}; // 0x110 (272)
}

