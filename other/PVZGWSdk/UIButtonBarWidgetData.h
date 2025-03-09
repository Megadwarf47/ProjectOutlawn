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
	class UIElementFontStyle;
}

namespace fb {
	class UIButtonBarWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIButtonBarWidgetData"); }
		virtual ~UIButtonBarWidgetData() override {}
		UIButtonBarWidgetData() {
			m_buttonAndTextSeparation = 10.f;
			m_entrySeparation = 10.f;
			m_textYOffset = 0.f;
		};

		float m_buttonAndTextSeparation; // 0x68 (104)
		float m_entrySeparation; // 0x6C (108)
		UIElementColor m_enabledColor; // 0x70 (112)
		UIElementColor m_disabledColor; // 0x90 (144)
		float m_textYOffset; // 0xB0 (176)
		CtrRef<UIElementFontStyle> m_fontStyle; // 0xB8 (184)
	}; // 0xC0 (192)
}

