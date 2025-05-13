///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementBlendType.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementGradient.h>

namespace fb {
	class UIElementSlice9FillData;
}

namespace fb {
	class UIElementFillData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementFillData"); }
		virtual ~UIElementFillData() override {}
		UIElementFillData() {
			m_backgroundAntiAliasingWidth = 1.f;
			m_outlineAntiAliasingWidth = 1.f;
			m_backgroundBlend = UIElementBlendType::UIElementBlendType_AlphaBlend;
			m_outlineBlend = UIElementBlendType::UIElementBlendType_AlphaBlend;
			m_drawBackground = true;
			m_useBackgroundGradient = false;
			m_useBackgroundAntiAliasing = false;
			m_drawOutline = true;
			m_useOutlineGradient = false;
			m_useOutlineAntiAliasing = false;
		};

		float m_backgroundAntiAliasingWidth; // 0x18 (24)
		UIElementColor m_backgroundColor; // 0x20 (32)
		UIElementGradient m_backgroundGradient; // 0x40 (64)
		UIElementColor m_outlineColor; // 0xC0 (192)
		UIElementGradient m_outlineGradient; // 0xE0 (224)
		float m_outlineAntiAliasingWidth; // 0x160 (352)
		UIElementBlendType m_backgroundBlend; // 0x164 (356)
		UIElementBlendType m_outlineBlend; // 0x168 (360)
		String m_textureId; // 0x170 (368)
		CtrRef<UIElementSlice9FillData> m_slice9Fill; // 0x178 (376)
		bool m_drawBackground; // 0x180 (384)
		bool m_useBackgroundGradient; // 0x181 (385)
		bool m_useBackgroundAntiAliasing; // 0x182 (386)
		bool m_drawOutline; // 0x183 (387)
		bool m_useOutlineGradient; // 0x184 (388)
		bool m_useOutlineAntiAliasing; // 0x185 (389)
	}; // 0x190 (400)
}

