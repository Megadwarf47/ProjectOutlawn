///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UISPLoadingWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISPLoadingWidgetData"); }
		virtual ~UISPLoadingWidgetData() override {}
		UISPLoadingWidgetData() {
			m_scanDelay = 1.f;
			m_scanSpeed = 0.25f;
			m_distortPowerMin = 0.f;
			m_distortPowerMax = 10.f;
			m_scanlineAlphaMin = 0.f;
			m_scanlineAlphaMax = 0.2f;
			m_redShiftStart = -0.0024f;
			m_redShiftEnd = -0.0024f;
			m_greenShiftStart = 0.2f;
			m_greenShiftEnd = 0.2f;
			m_blueShiftStart = -0.3f;
			m_blueShiftEnd = -0.3f;
		};

		CtrRef<UIElementFontStyle> m_iconLabelFontStyle; // 0x68 (104)
		float m_scanDelay; // 0x70 (112)
		float m_scanSpeed; // 0x74 (116)
		float m_distortPowerMin; // 0x78 (120)
		float m_distortPowerMax; // 0x7C (124)
		float m_scanlineAlphaMin; // 0x80 (128)
		float m_scanlineAlphaMax; // 0x84 (132)
		float m_redShiftStart; // 0x88 (136)
		float m_redShiftEnd; // 0x8C (140)
		float m_greenShiftStart; // 0x90 (144)
		float m_greenShiftEnd; // 0x94 (148)
		float m_blueShiftStart; // 0x98 (152)
		float m_blueShiftEnd; // 0x9C (156)
	}; // 0xA0 (160)
}

