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
#include <fb/UIAutoListCategoryData.h>
#include <fb/UIElementAlignment.h>

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
	class UIElementScrollbarStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIBattledashAutoListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattledashAutoListWidgetData"); }
		virtual ~UIBattledashAutoListWidgetData() override {}
		UIBattledashAutoListWidgetData() {
			m_headerLeftMargin = 5.f;
			m_headerPadding = 6.f;
			m_headerHeight = 20.f;
			m_headerTextAlignment = UIElementAlignment::UIElementAlignment_Left;
			m_listPadding = 1.f;
			m_pinholeMarkerSize = 4.f;
			m_highlightAnimationSpeed = 1.f;
			m_scrollbarWidth = 4;
			m_scrollbarMargin = 5;
			m_drawHiddenRowsCount = false;
			m_hasRowImages = false;
		};

		Array<UIAutoListCategoryData> m_categories; // 0x68 (104)
		CtrRef<UIElementFontStyle> m_headerFont; // 0x70 (112)
		CtrRef<UIElementFillData> m_headerBackgroundFill; // 0x78 (120)
		float m_headerLeftMargin; // 0x80 (128)
		float m_headerPadding; // 0x84 (132)
		float m_headerHeight; // 0x88 (136)
		UIElementAlignment m_headerTextAlignment; // 0x8C (140)
		CtrRef<UIWidgetBlueprint> m_emptyHeaderInfoWidget; // 0x90 (144)
		float m_listPadding; // 0x98 (152)
		CtrRef<UIElementFillData> m_rowBackgroundFill; // 0xA0 (160)
		CtrRef<UIWidgetBlueprint> m_listRowWidget; // 0xA8 (168)
		float m_pinholeMarkerSize; // 0xB0 (176)
		float m_highlightAnimationSpeed; // 0xB4 (180)
		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0xB8 (184)
		u32 m_scrollbarWidth; // 0xC0 (192)
		u32 m_scrollbarMargin; // 0xC4 (196)
		bool m_drawHiddenRowsCount; // 0xC8 (200)
		bool m_hasRowImages; // 0xC9 (201)
	}; // 0xD0 (208)
}

