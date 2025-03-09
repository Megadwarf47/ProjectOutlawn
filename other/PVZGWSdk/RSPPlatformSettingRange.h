///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GamePlatform.h>
#include <fb/SettingRange.h>

namespace fb {
	struct RSPPlatformSettingRange {
		RSPPlatformSettingRange() {
		};

		Array<GamePlatform> m_platforms; // 0x0 (0)
		Array<SettingRange> m_ranges; // 0x8 (8)
	}; // 0x10 (16)
}

