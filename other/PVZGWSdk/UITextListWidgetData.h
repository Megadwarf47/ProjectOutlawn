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
	class UIElementFillData;
	class UIElementFontStyle;
	class UIElementTableStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UITextListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITextListWidgetData"); }
		virtual ~UITextListWidgetData() override {}
		UITextListWidgetData() {
			m_rowHeight = 24;
			m_categoryHeight = 20;
			m_cellSpacing = 1;
			m_xOffset = 5;
			m_xOffsetRight = 5;
			m_scrollbarWidth = 15;
			m_scrollbarMargin = 5;
			m_alwaysShowScrollbar = false;
		};

		u32 m_rowHeight; // 0x68 (104)
		u32 m_categoryHeight; // 0x6C (108)
		CtrRef<UIElementFontStyle> m_font; // 0x70 (112)
		CtrRef<UIElementTableStyle> m_tableStyle; // 0x78 (120)
		u32 m_cellSpacing; // 0x80 (128)
		CtrRef<UIElementFillData> m_selectedRowFill; // 0x88 (136)
		CtrRef<UIElementFontStyle> m_selectedRowFont; // 0x90 (144)
		u32 m_xOffset; // 0x98 (152)
		u32 m_xOffsetRight; // 0x9C (156)
		u32 m_scrollbarWidth; // 0xA0 (160)
		s32 m_scrollbarMargin; // 0xA4 (164)
		CtrRef<UIWidgetBlueprint> m_widgetTemplate; // 0xA8 (168)
		bool m_alwaysShowScrollbar; // 0xB0 (176)
	}; // 0xB8 (184)
}

