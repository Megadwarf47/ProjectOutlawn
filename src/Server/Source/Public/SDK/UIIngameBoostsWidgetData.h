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
	class UIElementButtonStyle;
	class UIElementFillData;
}

namespace fb {
	class UIIngameBoostsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIIngameBoostsWidgetData"); }
		virtual ~UIIngameBoostsWidgetData() override {}
		UIIngameBoostsWidgetData() {
		};

		CtrRef<UIElementButtonStyle> m_menuButtonStyle; // 0x68 (104)
		CtrRef<UIElementFillData> m_focusedFill; // 0x70 (112)
		UIElementColor m_defaultBoostArrowColor; // 0x80 (128)
		UIElementColor m_activeBoostArrowColor; // 0xA0 (160)
		UIElementColor m_activeBoostTextHighlightColor; // 0xC0 (192)
		UIElementColor m_activeBoostTextDefaultColor; // 0xE0 (224)
		CtrRef<UIElementFillData> m_unfocusedFill; // 0x100 (256)
	}; // 0x110 (272)
}

