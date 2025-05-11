///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatEvent.h>
#include <fb/Types.h>

namespace fb {
	struct PVZUITeamCompBoast {
		PVZUITeamCompBoast() {
			m_measuring = StatEvent::StatEvent_FirstKill;
			m_scoredStat = 0;
			m_iconIndex = 0;
		};

		StatEvent m_measuring; // 0x0 (0)
		s32 m_scoredStat; // 0x4 (4)
		s32 m_iconIndex; // 0x8 (8)
	}; // 0xC (12)
}

