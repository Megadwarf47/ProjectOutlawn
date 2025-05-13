///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUISettingsItem.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct PVZUISettingsGroup {
		PVZUISettingsGroup() {
			m_screenColumn = 1;
		};

		String m_nameSid; // 0x0 (0)
		s32 m_screenColumn; // 0x8 (8)
		Array<PVZUISettingsItem> m_settingsItems; // 0x10 (16)
	}; // 0x18 (24)
}

