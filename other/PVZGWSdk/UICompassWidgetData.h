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
	class UICompassWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICompassWidgetData"); }
		virtual ~UICompassWidgetData() override {}
		UICompassWidgetData() {
			m_directionMakerCount = 16;
			m_directionMarkerLineLength = 8.f;
		};

		u32 m_directionMakerCount; // 0x68 (104)
		float m_directionMarkerLineLength; // 0x6C (108)
		UIElementColor m_directionMarkerColor; // 0x70 (112)
	}; // 0x90 (144)
}

