///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TabletCommanderNetworkState.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderNetworkVehicleState {
		TabletCommanderNetworkVehicleState() {
			m_iconType = 0;
		};

		TabletCommanderNetworkState m_networkState; // 0x0 (0)
		u32 m_iconType; // 0xC (12)
	}; // 0x10 (16)
}

