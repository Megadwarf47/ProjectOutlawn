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
#include <fb/UICommoRoseButtonInfo.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementRect.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UICommoRoseWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICommoRoseWidgetData"); }
		virtual ~UICommoRoseWidgetData() override {}
		UICommoRoseWidgetData() {
			m_deadzoneSize = 50;
			m_buttonStickyness = 0.5f;
			m_inputReturnDelay = 0.2f;
			m_fastFadeSeconds = 0.2f;
			m_slowFadeSeconds = 0.5f;
			m_highlightBumpSeconds = 0.3f;
			m_highlightBumps = 2;
			m_drawDirectionArrow = false;
		};

		Array<UICommoRoseButtonInfo> m_buttonInfo; // 0x68 (104)
		UIElementRect m_inactiveRect; // 0x70 (112)
		UIElementRect m_activeRect; // 0x80 (128)
		CtrRef<UIElementFontStyle> m_inactiveFontStyle; // 0x90 (144)
		UIElementColor m_inactiveRectColor; // 0xA0 (160)
		UIElementColor m_activeRectColor; // 0xC0 (192)
		CtrRef<UIElementFontStyle> m_activeFontStyle; // 0xE0 (224)
		u32 m_deadzoneSize; // 0xE8 (232)
		float m_buttonStickyness; // 0xEC (236)
		float m_inputReturnDelay; // 0xF0 (240)
		float m_fastFadeSeconds; // 0xF4 (244)
		float m_slowFadeSeconds; // 0xF8 (248)
		float m_highlightBumpSeconds; // 0xFC (252)
		s32 m_highlightBumps; // 0x100 (256)
		bool m_drawDirectionArrow; // 0x104 (260)
	}; // 0x110 (272)
}

