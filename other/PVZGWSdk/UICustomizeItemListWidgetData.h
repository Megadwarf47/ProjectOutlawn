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
	class UIElementScrollbarStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UICustomizeItemListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizeItemListWidgetData"); }
		virtual ~UICustomizeItemListWidgetData() override {}
		UICustomizeItemListWidgetData() {
			m_categorySpacing = 2.f;
			m_itemSpacing = 0.f;
			m_categoryItemsSpacing = 2.f;
			m_itemsScrollbarWidth = 5.f;
			m_itemsScrollbarMargin = 2.f;
			m_selectedState = 0;
			m_selectedTab = 0;
			m_selectedSlot = 0;
			m_selectedItemId = 0;
		};

		float m_categorySpacing; // 0x68 (104)
		float m_itemSpacing; // 0x6C (108)
		float m_categoryItemsSpacing; // 0x70 (112)
		CtrRef<UIWidgetBlueprint> m_categoryButtonTemplate; // 0x78 (120)
		CtrRef<UIWidgetBlueprint> m_itemTemplate; // 0x80 (128)
		float m_itemsScrollbarWidth; // 0x88 (136)
		float m_itemsScrollbarMargin; // 0x8C (140)
		CtrRef<UIElementScrollbarStyle> m_itemsScrollbarStyle; // 0x90 (144)
		s32 m_selectedState; // 0x98 (152)
		s32 m_selectedTab; // 0x9C (156)
		s32 m_selectedSlot; // 0xA0 (160)
		s32 m_selectedItemId; // 0xA4 (164)
	}; // 0xA8 (168)
}

