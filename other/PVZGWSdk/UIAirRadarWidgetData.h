///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UIAirRadarWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAirRadarWidgetData"); }
		virtual ~UIAirRadarWidgetData() override {}
		UIAirRadarWidgetData() {
			m_sweepSpeed = 0.5f;
		};

		String m_sweepTexture; // 0x68 (104)
		float m_sweepSpeed; // 0x70 (112)
		UIElementColor m_sweepColor; // 0x80 (128)
	}; // 0xA0 (160)
}

