///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUISettingsGroup.h>
#include <fb/String.h>

namespace fb {
	struct PVZUISettingsPage {
		PVZUISettingsPage() {
		};

		String m_nameSid; // 0x0 (0)
		Array<PVZUISettingsGroup> m_settingsGroups; // 0x8 (8)
	}; // 0x10 (16)
}

