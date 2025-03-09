///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UIBatteryMeterWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBatteryMeterWidgetData"); }
		virtual ~UIBatteryMeterWidgetData() override {}
		UIBatteryMeterWidgetData() {
			m_barNumber = 4;
			m_barsOffsetX = 5.f;
			m_barsOffsetY = 5.f;
			m_barSpacing = 5.f;
			m_onlyFullBars = true;
			m_lastBarAtZero = false;
		};

		String m_batteryPercentProperty; // 0x68 (104)
		u32 m_barNumber; // 0x70 (112)
		float m_barsOffsetX; // 0x74 (116)
		float m_barsOffsetY; // 0x78 (120)
		float m_barSpacing; // 0x7C (124)
		String m_barTexture; // 0x80 (128)
		String m_batteryOutlineTexture; // 0x88 (136)
		bool m_onlyFullBars; // 0x90 (144)
		bool m_lastBarAtZero; // 0x91 (145)
	}; // 0x98 (152)
}

