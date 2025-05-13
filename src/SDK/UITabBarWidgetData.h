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
#include <fb/UITabBarButton.h>
#include <fb/Vec2.h>

namespace fb {
	class UIElementButtonStyle;
	class UIElementFillData;
}

namespace fb {
	class UITabBarWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITabBarWidgetData"); }
		virtual ~UITabBarWidgetData() override {}
		UITabBarWidgetData() {
			m_visibilityAnimationSpeed = 0.1f;
			m_maxVisibleButtons = 100;
			m_buttonSpacing = 0.f;
			m_navPadding = 0.f;
			m_newContentIconScaling = Vec2(1.f, 1.f);
			m_selectedTab = 0;
			m_useTabButtons = true;
			m_useDPad = false;
			m_useStick = false;
			m_distributeSizeEqually = false;
		};

		Array<UITabBarButton> m_buttons; // 0x68 (104)
		String m_defaultIndexProperty; // 0x70 (112)
		UIElementColor m_newContentIconColor; // 0x80 (128)
		CtrRef<UIElementFillData> m_backgroundFillData; // 0xA0 (160)
		CtrRef<UIElementButtonStyle> m_buttonStyle; // 0xA8 (168)
		CtrRef<UIElementButtonStyle> m_disabledButtonStyle; // 0xB0 (176)
		float m_visibilityAnimationSpeed; // 0xB8 (184)
		u32 m_maxVisibleButtons; // 0xBC (188)
		float m_buttonSpacing; // 0xC0 (192)
		float m_navPadding; // 0xC4 (196)
		String m_navArrowTexture; // 0xC8 (200)
		String m_newContentIconName; // 0xD0 (208)
		Vec2 m_newContentIconPadding; // 0xD8 (216)
		Vec2 m_newContentIconScaling; // 0xE0 (224)
		s32 m_selectedTab; // 0xE8 (232)
		bool m_useTabButtons; // 0xEC (236)
		bool m_useDPad; // 0xED (237)
		bool m_useStick; // 0xEE (238)
		bool m_distributeSizeEqually; // 0xEF (239)
	}; // 0xF0 (240)
}

