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
#include <fb/Vec2.h>

namespace fb {
	class UIElementGenericStyle;
}

namespace fb {
	class UIHudBackgroundWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIHudBackgroundWidgetData"); }
		virtual ~UIHudBackgroundWidgetData() override {}
		UIHudBackgroundWidgetData() {
			m_scanlineSpeed = 0.05f;
			m_scanlineUVWrap = 3.5f;
			m_scanlineAlpha = 0.12f;
			m_colorScanlineSpeed = 0.5f;
			m_colorScanlineUVWrap = 6.f;
			m_colorScanlineAlpha = 0.1f;
			m_expand = Vec2(16.f, 16.f);
			m_cutoffMargin = 2.f;
			m_useOpacitySetting = true;
			m_renderDummiesSeparately = false;
		};

		float m_scanlineSpeed; // 0x68 (104)
		float m_scanlineUVWrap; // 0x6C (108)
		UIElementColor m_backgroundColor; // 0x70 (112)
		float m_scanlineAlpha; // 0x90 (144)
		float m_colorScanlineSpeed; // 0x94 (148)
		float m_colorScanlineUVWrap; // 0x98 (152)
		float m_colorScanlineAlpha; // 0x9C (156)
		Vec2 m_expand; // 0xA0 (160)
		float m_cutoffMargin; // 0xA8 (168)
		String m_shapeId; // 0xB0 (176)
		CtrRef<UIElementGenericStyle> m_style; // 0xB8 (184)
		bool m_useOpacitySetting; // 0xC0 (192)
		bool m_renderDummiesSeparately; // 0xC1 (193)
	}; // 0xD0 (208)
}

