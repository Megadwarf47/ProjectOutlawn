///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/RSPPlatformSettingRange.h>
#include <fb/SettingRange.h>
#include <fb/String.h>

namespace fb {
	struct SettingsRangeConfig {
		SettingsRangeConfig() {
		};

		String m_key; // 0x0 (0)
		Array<SettingRange> m_ranges; // 0x8 (8)
		Array<RSPPlatformSettingRange> m_platformRanges; // 0x10 (16)
	}; // 0x18 (24)
}

