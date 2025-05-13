///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementStyle.h>

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
}

namespace fb {
	class UIElementButtonStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementButtonStyle"); }
		virtual ~UIElementButtonStyle() override {}
		UIElementButtonStyle() {
		};

		String m_textureId; // 0x18 (24)
		UIElementColor m_normalTextColor; // 0x20 (32)
		UIElementColor m_hoveredTextColor; // 0x40 (64)
		UIElementColor m_pressedTextColor; // 0x60 (96)
		UIElementColor m_disabledTextColor; // 0x80 (128)
		CtrRef<UIElementFillData> m_fillDataNormal; // 0xA0 (160)
		CtrRef<UIElementFillData> m_fillDataHovered; // 0xA8 (168)
		CtrRef<UIElementFillData> m_fillDataPressed; // 0xB0 (176)
		CtrRef<UIElementFillData> m_fillDataDisabled; // 0xB8 (184)
		CtrRef<UIElementFontStyle> m_normalFontStyle; // 0xC0 (192)
		CtrRef<UIElementFontStyle> m_hoveredFontStyle; // 0xC8 (200)
		CtrRef<UIElementFontStyle> m_pressedFontStyle; // 0xD0 (208)
		CtrRef<UIElementFontStyle> m_disabledFontStyle; // 0xD8 (216)
	}; // 0xE0 (224)
}

