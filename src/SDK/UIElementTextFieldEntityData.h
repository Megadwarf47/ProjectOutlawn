///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIElementEntityData.h>
#include <fb/UIElementText.h>

namespace fb {
	class UIElementFontStyle;
	class UIElementGenericStyle;
}

namespace fb {
	class UIElementTextFieldEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementTextFieldEntityData"); }
		virtual ~UIElementTextFieldEntityData() override {}
		UIElementTextFieldEntityData() {
			m_textOffset = 0.f;
			m_autoAdjustLeftPadding = 5.f;
			m_autoAdjustRightPadding = 5.f;
			m_autoAdjustWidth = false;
			m_useAutoScroll = false;
		};

		CtrRef<UIElementGenericStyle> m_style; // 0xD0 (208)
		UIElementText m_text; // 0xD8 (216)
		CtrRef<UIElementFontStyle> m_fontStyle; // 0xF8 (248)
		float m_textOffset; // 0x100 (256)
		float m_autoAdjustLeftPadding; // 0x104 (260)
		float m_autoAdjustRightPadding; // 0x108 (264)
		bool m_autoAdjustWidth; // 0x10C (268)
		bool m_useAutoScroll; // 0x10D (269)
	}; // 0x110 (272)
}

