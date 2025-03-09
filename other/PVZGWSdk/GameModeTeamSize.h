///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct GameModeTeamSize {
		GameModeTeamSize() {
			m_playerCount = 0;
			m_squadSize = 0;
			m_squadAutoFillLimit = 0;
			m_teamImbalanceLimit = 2;
		};

		u32 m_playerCount; // 0x0 (0)
		u32 m_squadSize; // 0x4 (4)
		u32 m_squadAutoFillLimit; // 0x8 (8)
		u32 m_teamImbalanceLimit; // 0xC (12)
	}; // 0x10 (16)
}

