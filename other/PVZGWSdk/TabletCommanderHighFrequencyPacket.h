///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/TabletCommanderHighFrequencyFriendlySquad.h>
#include <fb/TabletCommanderNetworkBombState.h>
#include <fb/TabletCommanderNetworkSoldierState.h>
#include <fb/TabletCommanderNetworkState.h>
#include <fb/TabletCommanderNetworkVehicleState.h>
#include <fb/TabletCommanderPacketBase.h>

namespace fb {
	struct TabletCommanderHighFrequencyPacket {
		TabletCommanderHighFrequencyPacket() {
		};

		TabletCommanderPacketBase m_packetBase; // 0x0 (0)
		Array<TabletCommanderHighFrequencyFriendlySquad> m_friendlySquadList; // 0x10 (16)
		Array<TabletCommanderNetworkVehicleState> m_friendlyVehicleList; // 0x18 (24)
		Array<TabletCommanderNetworkState> m_friendlyTomahawkList; // 0x20 (32)
		Array<TabletCommanderNetworkSoldierState> m_spottedEnemySoldierList; // 0x28 (40)
		Array<TabletCommanderNetworkVehicleState> m_spottedEnemyVehicleList; // 0x30 (48)
		Array<TabletCommanderNetworkState> m_spottedEnemyTomahawkList; // 0x38 (56)
		Array<TabletCommanderNetworkBombState> m_obliterationBomb; // 0x40 (64)
	}; // 0x48 (72)
}

