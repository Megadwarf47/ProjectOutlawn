///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/UIVisualWidgetType.h>

namespace fb {
	class UICommanderMinimapIconsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICommanderMinimapIconsWidgetData"); }
		virtual ~UICommanderMinimapIconsWidgetData() override {}
		UICommanderMinimapIconsWidgetData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
			m_satelliteMode = false;
			m_airRadarMode = false;
		};

		UIVisualWidgetType m_visualWidgetType; // 0x68 (104)
		bool m_satelliteMode; // 0x6C (108)
		bool m_airRadarMode; // 0x6D (109)
	}; // 0x70 (112)
}

