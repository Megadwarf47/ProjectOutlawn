///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TabletCommanderTickets {
		TabletCommanderTickets() {
			m_friendTickets = 0;
			m_friendMaxTickets = 0;
			m_enemyTickets = 0;
			m_enemyMaxTickets = 0;
		};

		u32 m_friendTickets; // 0x0 (0)
		u32 m_friendMaxTickets; // 0x4 (4)
		u32 m_enemyTickets; // 0x8 (8)
		u32 m_enemyMaxTickets; // 0xC (12)
	}; // 0x10 (16)
}

