///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct LockedSettingConfig {
		LockedSettingConfig() {
			m_value = 0;
			m_validateSetting = true;
		};

		String m_key; // 0x0 (0)
		u32 m_value; // 0x8 (8)
		bool m_validateSetting; // 0xC (12)
	}; // 0x10 (16)
}

