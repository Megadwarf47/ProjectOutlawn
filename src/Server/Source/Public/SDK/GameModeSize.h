///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameModeTeamSize.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct GameModeSize {
		GameModeSize() {
			m_playerCount = 0;
			m_commanderCount = 0;
			m_roundsPerMap = 2;
			m_forceSquad = false;
			m_isCoop = false;
			m_isOffline = false;
			m_isFrontend = false;
		};

		String m_name; // 0x0 (0)
		String m_shortName; // 0x8 (8)
		String m_metaIdentifier; // 0x10 (16)
		u32 m_playerCount; // 0x18 (24)
		u32 m_commanderCount; // 0x1C (28)
		Array<GameModeTeamSize> m_teams; // 0x20 (32)
		u32 m_roundsPerMap; // 0x28 (40)
		bool m_forceSquad; // 0x2C (44)
		bool m_isCoop; // 0x2D (45)
		bool m_isOffline; // 0x2E (46)
		bool m_isFrontend; // 0x2F (47)
	}; // 0x30 (48)
}

