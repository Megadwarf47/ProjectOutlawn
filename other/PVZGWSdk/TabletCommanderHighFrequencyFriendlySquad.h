///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SquadId.h>
#include <fb/TabletCommanderNetworkSoldierState.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderHighFrequencyFriendlySquad {
		TabletCommanderHighFrequencyFriendlySquad() {
			m_squadId = SquadId::SquadNone;
			m_normalizedSquadScore = 0.f;
			m_isSquadWipeProtected = false;
			m_isSquadReinforced = false;
		};

		SquadId m_squadId; // 0x0 (0)
		float m_normalizedSquadScore; // 0x4 (4)
		bool m_isSquadWipeProtected; // 0x8 (8)
		bool m_isSquadReinforced; // 0x9 (9)
		Array<TabletCommanderNetworkSoldierState> m_soldiers; // 0x10 (16)
	}; // 0x18 (24)
}

