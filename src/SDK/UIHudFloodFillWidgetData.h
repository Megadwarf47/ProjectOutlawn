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
	class UIHudFloodFillWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIHudFloodFillWidgetData"); }
		virtual ~UIHudFloodFillWidgetData() override {}
		UIHudFloodFillWidgetData() {
		};

		UIElementColor m_color; // 0x70 (112)
	}; // 0x90 (144)
}

