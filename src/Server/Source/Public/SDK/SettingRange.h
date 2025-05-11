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
	struct SettingRange {
		SettingRange() {
			m_min = 0;
			m_max = 1;
		};

		String m_key; // 0x0 (0)
		u32 m_min; // 0x8 (8)
		u32 m_max; // 0xC (12)
	}; // 0x10 (16)
}

