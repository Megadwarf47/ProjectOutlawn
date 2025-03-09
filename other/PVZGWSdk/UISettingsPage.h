///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/UISettingsGroup.h>

namespace fb {
	struct UISettingsPage {
		UISettingsPage() {
		};

		String m_nameSid; // 0x0 (0)
		Array<UISettingsGroup> m_settingsGroups; // 0x8 (8)
	}; // 0x10 (16)
}

