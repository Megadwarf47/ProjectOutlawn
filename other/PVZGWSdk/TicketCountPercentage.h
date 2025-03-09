///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TicketCountPercentage {
		TicketCountPercentage() {
			m_maxPercentOfTicketsLeft = 100;
			m_ticketLossPerMin = 10;
		};

		s32 m_maxPercentOfTicketsLeft; // 0x0 (0)
		s32 m_ticketLossPerMin; // 0x4 (4)
	}; // 0x8 (8)
}

