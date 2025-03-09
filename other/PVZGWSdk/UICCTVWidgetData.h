///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UICCTVWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICCTVWidgetData"); }
		virtual ~UICCTVWidgetData() override {}
		UICCTVWidgetData() {
			m_noiseSpeed = 0.1f;
			m_scanlineWrapAmount = 8.f;
			m_scanlineSpeed = 0.1f;
			m_scanlinePower = 1.f;
			m_colorScanlineWrapAmount = 8.f;
			m_colorScanlineSpeed = 0.1f;
			m_colorScanlinePower = 0.1f;
			m_rgbSaturation = 1.5f;
			m_rgbContrast = 1.f;
			m_rDistortAmount = 0.1f;
			m_power = 0.f;
			m_externalPowerSpeed = 2.f;
			m_distortMinTime = 3.f;
			m_distortMaxTime = 6.f;
			m_tvNoiseSpeed = 1.75f;
			m_enableNoise = false;
		};

		float m_noiseSpeed; // 0x68 (104)
		float m_scanlineWrapAmount; // 0x6C (108)
		UIElementColor m_color; // 0x70 (112)
		float m_scanlineSpeed; // 0x90 (144)
		float m_scanlinePower; // 0x94 (148)
		float m_colorScanlineWrapAmount; // 0x98 (152)
		float m_colorScanlineSpeed; // 0x9C (156)
		float m_colorScanlinePower; // 0xA0 (160)
		float m_rgbSaturation; // 0xA4 (164)
		float m_rgbContrast; // 0xA8 (168)
		float m_rDistortAmount; // 0xAC (172)
		float m_power; // 0xB0 (176)
		float m_externalPowerSpeed; // 0xB4 (180)
		float m_distortMinTime; // 0xB8 (184)
		float m_distortMaxTime; // 0xBC (188)
		float m_tvNoiseSpeed; // 0xC0 (192)
		bool m_enableNoise; // 0xC4 (196)
	}; // 0xD0 (208)
}

