///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SundropIconParam.h>
#include <fb/UIVisualWidgetType.h>
#include <fb/UIWidgetEntityData.h>

namespace fb {
	class PVZUICommanderSundropsWidgetData : public UIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUICommanderSundropsWidgetData"); }
		virtual ~PVZUICommanderSundropsWidgetData() override {}
		PVZUICommanderSundropsWidgetData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
			m_collectAccelerationDuration = 0.8f;
			m_kinectExpansionRatio = 1.f;
		};

		UIVisualWidgetType m_visualWidgetType; // 0x68 (104)
		SundropIconParam m_manDownParams; // 0x6C (108)
		SundropIconParam m_tickerParams; // 0x74 (116)
		float m_collectAccelerationDuration; // 0x7C (124)
		float m_kinectExpansionRatio; // 0x80 (128)
	}; // 0x88 (136)
}

