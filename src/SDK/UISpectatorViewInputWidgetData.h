///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIElementColor.h>
#include <fb/UISpectatorWidgetData.h>

namespace fb {
	class UISpectatorViewInputWidgetData : public UISpectatorWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorViewInputWidgetData"); }
		virtual ~UISpectatorViewInputWidgetData() override {}
		UISpectatorViewInputWidgetData() {
		};

		UIElementColor m_turboPressedColor; // 0x70 (112)
		UIElementColor m_turboReleasedColor; // 0x90 (144)
	}; // 0xB0 (176)
}

