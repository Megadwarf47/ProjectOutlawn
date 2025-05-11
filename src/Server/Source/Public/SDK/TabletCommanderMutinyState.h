///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TabletCommanderMutinyState {
		TabletCommanderMutinyState() {
			m_mutinyTreshold = 0.f;
			m_mutinyDuration = 0;
			m_activeSquadCount = 0;
			m_negativeRatingCount = 0;
		};

		float m_mutinyTreshold; // 0x0 (0)
		u32 m_mutinyDuration; // 0x4 (4)
		u8 m_activeSquadCount; // 0x8 (8)
		u8 m_negativeRatingCount; // 0x9 (9)
	}; // 0xC (12)
}

