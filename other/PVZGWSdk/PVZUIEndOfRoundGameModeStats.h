///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUIDisplayStat.h>

namespace fb {
	struct PVZUIEndOfRoundGameModeStats {
		PVZUIEndOfRoundGameModeStats() {
		};

		Array<String> m_gameModes; // 0x0 (0)
		Array<PVZUIDisplayStat> m_boasts; // 0x8 (8)
		Array<PVZUIDisplayStat> m_playerStats; // 0x10 (16)
		Array<PVZUIDisplayStat> m_teamworkStats; // 0x18 (24)
	}; // 0x20 (32)
}

