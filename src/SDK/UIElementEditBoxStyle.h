///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementStyle.h>

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
}

namespace fb {
	class UIElementEditBoxStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementEditBoxStyle"); }
		virtual ~UIElementEditBoxStyle() override {}
		UIElementEditBoxStyle() {
			m_marginTop = 0.f;
			m_marginLeft = 0.f;
			m_marginRight = 0.f;
			m_marginBottom = 0.f;
			m_barThickness = 2.f;
			m_barOffsetX = 0.f;
		};

		CtrRef<UIElementFillData> m_fillDataNormal; // 0x18 (24)
		UIElementColor m_barColor; // 0x20 (32)
		CtrRef<UIElementFillData> m_fillDataHovered; // 0x40 (64)
		CtrRef<UIElementFillData> m_fillDataActive; // 0x48 (72)
		CtrRef<UIElementFontStyle> m_fontStyleNormal; // 0x50 (80)
		float m_marginTop; // 0x58 (88)
		float m_marginLeft; // 0x5C (92)
		float m_marginRight; // 0x60 (96)
		float m_marginBottom; // 0x64 (100)
		float m_barThickness; // 0x68 (104)
		float m_barOffsetX; // 0x6C (108)
	}; // 0x70 (112)
}

