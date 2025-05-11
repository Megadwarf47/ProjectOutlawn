///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TabletCommanderNetworkState.h>
#include <fb/TeamId.h>

namespace fb {
	struct TabletCommanderNetworkBombState {
		TabletCommanderNetworkBombState() {
			m_teamId = TeamId::TeamNeutral;
		};

		TabletCommanderNetworkState m_networkState; // 0x0 (0)
		TeamId m_teamId; // 0xC (12)
	}; // 0x10 (16)
}

