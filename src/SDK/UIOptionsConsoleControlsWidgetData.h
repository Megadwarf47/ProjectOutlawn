///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/UIOptionsConsoleControlsShown.h>
#include <fb/UIOptionsConsoleControlsTextFieldMappings.h>
#include <fb/UIOptionsListWidgetData.h>

namespace fb {
	class UIOptionsConsoleControlsWidgetData : public UIOptionsListWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionsConsoleControlsWidgetData"); }
		virtual ~UIOptionsConsoleControlsWidgetData() override {}
		UIOptionsConsoleControlsWidgetData() {
			m_defaultMode = UIOptionsConsoleControlsShown::UIOptionsConsoleControlsShown_Soldier;
		};

		UIOptionsConsoleControlsTextFieldMappings m_soldierMappings; // 0x90 (144)
		UIOptionsConsoleControlsTextFieldMappings m_vehicleMappings; // 0xA8 (168)
		UIOptionsConsoleControlsTextFieldMappings m_heliMappings; // 0xC0 (192)
		UIOptionsConsoleControlsTextFieldMappings m_jetMappings; // 0xD8 (216)
		Array<UIOptionsConsoleControlsShown> m_modes; // 0xF0 (240)
		UIOptionsConsoleControlsShown m_defaultMode; // 0xF8 (248)
		String m_defaultTitle; // 0x100 (256)
	}; // 0x108 (264)
}

