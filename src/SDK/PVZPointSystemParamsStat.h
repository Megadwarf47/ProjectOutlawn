///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatEvent.h>
#include <fb/String.h>

namespace fb {
	struct PVZPointSystemParamsStat {
		PVZPointSystemParamsStat() {
			m_statEvent = StatEvent::StatEvent_FirstKill;
		};

		String m_statName; // 0x0 (0)
		StatEvent m_statEvent; // 0x8 (8)
	}; // 0x10 (16)
}

