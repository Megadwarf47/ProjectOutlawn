///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUISettingsPage.h>
#include <fb/UIComponentData.h>

namespace fb {
	class PVZUISettingsCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUISettingsCompData"); }
		virtual ~PVZUISettingsCompData() override {}
		PVZUISettingsCompData() {
		};

		Array<PVZUISettingsPage> m_settingsPages; // 0x30 (48)
	}; // 0x38 (56)
}

