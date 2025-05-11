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
#include <fb/Vec2.h>

namespace fb {
	class UIMinimapLineStyle;
}

namespace fb {
	class UIMinimapUAVWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapUAVWidgetData"); }
		virtual ~UIMinimapUAVWidgetData() override {}
		UIMinimapUAVWidgetData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
			m_arrowSize = Vec2(32.f, 32.f);
			m_scanlineSpeed = 0.05f;
			m_scanlineUVWrap = 3.5f;
			m_enemyScanlineAlpha = 0.12f;
			m_friendlyScanlineAlpha = 0.12f;
			m_colorScanlineSpeed = 0.5f;
			m_colorScanlineUVWrap = 6.f;
			m_enemyColorScanlineAlpha = 0.1f;
			m_friendlyColorScanlineAlpha = 0.1f;
			m_expand = Vec2(16.f, 16.f);
			m_scanlineVertical = false;
			m_colorScanlineVertical = false;
		};

		UIVisualWidgetType m_visualWidgetType; // 0x68 (104)
		CtrRef<UIMinimapLineStyle> m_friendlyScanStyle; // 0x70 (112)
		UIElementColor m_backgroundColor; // 0x80 (128)
		CtrRef<UIMinimapLineStyle> m_enemyScanStyle; // 0xA0 (160)
		CtrRef<UIMinimapLineStyle> m_friendlyJamStyle; // 0xA8 (168)
		CtrRef<UIMinimapLineStyle> m_enemyJamStyle; // 0xB0 (176)
		CtrRef<UIMinimapLineStyle> m_friendlyVehicleScanStyle; // 0xB8 (184)
		CtrRef<UIMinimapLineStyle> m_friendlyInfantryScanStyle; // 0xC0 (192)
		CtrRef<UIMinimapLineStyle> m_friendlyRadarScanStyle; // 0xC8 (200)
		Vec2 m_arrowSize; // 0xD0 (208)
		String m_arrowTextue; // 0xD8 (216)
		float m_scanlineSpeed; // 0xE0 (224)
		float m_scanlineUVWrap; // 0xE4 (228)
		float m_enemyScanlineAlpha; // 0xE8 (232)
		float m_friendlyScanlineAlpha; // 0xEC (236)
		String m_colorScanlineTextureId; // 0xF0 (240)
		String m_scanlineTextureId; // 0xF8 (248)
		float m_colorScanlineSpeed; // 0x100 (256)
		float m_colorScanlineUVWrap; // 0x104 (260)
		float m_enemyColorScanlineAlpha; // 0x108 (264)
		float m_friendlyColorScanlineAlpha; // 0x10C (268)
		Vec2 m_expand; // 0x110 (272)
		String m_shapeId; // 0x118 (280)
		bool m_scanlineVertical; // 0x120 (288)
		bool m_colorScanlineVertical; // 0x121 (289)
	}; // 0x130 (304)
}

