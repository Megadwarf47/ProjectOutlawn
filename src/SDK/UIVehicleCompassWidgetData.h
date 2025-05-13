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

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIVehicleCompassWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIVehicleCompassWidgetData"); }
		virtual ~UIVehicleCompassWidgetData() override {}
		UIVehicleCompassWidgetData() {
			m_markerOffsetY = 0;
			m_fullCircleMultiplier = 1.f;
			m_intervals = 45;
			m_labelsOffsetX = 1;
			m_labelsOffsetY = 35;
			m_linesOffsetY = 15;
			m_degreesPerTexture = 10;
			m_displaySWNE = false;
		};

		String m_markerTexture; // 0x68 (104)
		s32 m_markerOffsetY; // 0x70 (112)
		float m_fullCircleMultiplier; // 0x74 (116)
		u32 m_intervals; // 0x78 (120)
		s32 m_labelsOffsetX; // 0x7C (124)
		s32 m_labelsOffsetY; // 0x80 (128)
		CtrRef<UIElementFontStyle> m_fontStyle; // 0x88 (136)
		s32 m_linesOffsetY; // 0x90 (144)
		String m_linesTexture; // 0x98 (152)
		u32 m_degreesPerTexture; // 0xA0 (160)
		bool m_displaySWNE; // 0xA4 (164)
	}; // 0xA8 (168)
}

