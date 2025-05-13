///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/UIPerformanceMetricSettings.h>

namespace fb {
	class UIPerformanceTestWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPerformanceTestWidgetData"); }
		virtual ~UIPerformanceTestWidgetData() override {}
		UIPerformanceTestWidgetData() {
			m_secondsToProbe = 5.f;
		};

		float m_secondsToProbe; // 0x68 (104)
		Array<UIPerformanceMetricSettings> m_settings; // 0x70 (112)
	}; // 0x78 (120)
}

