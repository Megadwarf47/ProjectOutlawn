///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UIComponentData.h>
#include <fb/UISettingsPage.h>

namespace fb {
	class UISettingsCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISettingsCompData"); }
		virtual ~UISettingsCompData() override {}
		UISettingsCompData() {
		};

		Array<UISettingsPage> m_settingsPages; // 0x30 (48)
	}; // 0x38 (56)
}

