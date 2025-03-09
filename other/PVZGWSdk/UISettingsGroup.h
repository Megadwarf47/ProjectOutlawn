///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UISettingsItem.h>

namespace fb {
	struct UISettingsGroup {
		UISettingsGroup() {
			m_screenColumn = 1;
		};

		String m_nameSid; // 0x0 (0)
		s32 m_screenColumn; // 0x8 (8)
		Array<UISettingsItem> m_settingsItems; // 0x10 (16)
	}; // 0x18 (24)
}

