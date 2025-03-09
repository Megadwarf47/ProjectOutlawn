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
	struct StatSpamSetting {
		StatSpamSetting() {
			m_event = StatEvent::StatEvent_Invalid;
			m_amountLimit = 0;
			m_timeLimit = 0.f;
			m_playerToPlayer = false;
		};

		StatEvent m_event; // 0x0 (0)
		u32 m_amountLimit; // 0x4 (4)
		float m_timeLimit; // 0x8 (8)
		bool m_playerToPlayer; // 0xC (12)
	}; // 0x10 (16)
}

