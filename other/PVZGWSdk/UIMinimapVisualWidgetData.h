///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementColor.h>
#include <fb/UIVisualWidgetType.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIMinimapVisualWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapVisualWidgetData"); }
		virtual ~UIMinimapVisualWidgetData() override {}
		UIMinimapVisualWidgetData() {
			m_widgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
			m_nativeViewWidth = 50.f;
			m_viewVelocityExpandFactor = 0.05f;
			m_viewVelocityMin = 25.f;
			m_viewVelocityMax = 100.f;
			m_lineWidth = 0.f;
			m_patternWidth = -1.f;
			m_patternSoftness = 3.f;
			m_useStencil = true;
			m_useMask = false;
			m_renderCombatArea = false;
		};

		UIVisualWidgetType m_widgetType; // 0x68 (104)
		String m_maskName; // 0x70 (112)
		UIElementColor m_minimapColor; // 0x80 (128)
		UIElementColor m_jointColor; // 0xA0 (160)
		UIElementColor m_jointNameColor1; // 0xC0 (192)
		UIElementColor m_jointNameColor2; // 0xE0 (224)
		UIElementColor m_lineColor; // 0x100 (256)
		UIElementColor m_areaColor; // 0x120 (288)
		UIElementColor m_secondaryColor; // 0x140 (320)
		float m_nativeViewWidth; // 0x160 (352)
		float m_viewVelocityExpandFactor; // 0x164 (356)
		float m_viewVelocityMin; // 0x168 (360)
		float m_viewVelocityMax; // 0x16C (364)
		String m_jointImage; // 0x170 (368)
		CtrRef<UIElementFontStyle> m_jointNameFont; // 0x178 (376)
		String m_jointNameSequence; // 0x180 (384)
		float m_lineWidth; // 0x188 (392)
		float m_patternWidth; // 0x18C (396)
		float m_patternSoftness; // 0x190 (400)
		bool m_useStencil; // 0x194 (404)
		bool m_useMask; // 0x195 (405)
		bool m_renderCombatArea; // 0x196 (406)
	}; // 0x1A0 (416)
}

