///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/TabletCommanderMapMarker.h>
#include <fb/TabletCommanderMutinyState.h>
#include <fb/TabletCommanderNetworkSoldierState.h>
#include <fb/TabletCommanderObjective.h>
#include <fb/TabletCommanderOrder.h>
#include <fb/TabletCommanderPacketBase.h>
#include <fb/TabletCommanderSquadRequest.h>
#include <fb/TabletCommanderTickets.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderLowFrequencyPacket {
		TabletCommanderLowFrequencyPacket() {
			m_roundTimeSeconds = 0;
			m_squadPoints = 0;
			m_preRoundPlayerReadyCount = 0;
			m_preRoundRestartTime = 0;
			m_obliterationTargetsArmedBitmask = 0;
			m_obliterationTargetsDestroyedBitmask = 0;
			m_currentCratesCount = 0;
		};

		TabletCommanderPacketBase m_packetBase; // 0x0 (0)
		Array<TabletCommanderNetworkSoldierState> m_friendlyDeadSoldierList; // 0x10 (16)
		Array<TabletCommanderObjective> m_objectiveList; // 0x18 (24)
		Array<TabletCommanderOrder> m_orderList; // 0x20 (32)
		Array<TabletCommanderSquadRequest> m_squadRequestList; // 0x28 (40)
		Array<TabletCommanderMapMarker> m_mapMarkerList; // 0x30 (48)
		TabletCommanderTickets m_tickets; // 0x38 (56)
		TabletCommanderMutinyState m_mutinyState; // 0x48 (72)
		u32 m_roundTimeSeconds; // 0x54 (84)
		u32 m_squadPoints; // 0x58 (88)
		u32 m_preRoundPlayerReadyCount; // 0x5C (92)
		u32 m_preRoundRestartTime; // 0x60 (96)
		s32 m_obliterationTargetsArmedBitmask; // 0x64 (100)
		s32 m_obliterationTargetsDestroyedBitmask; // 0x68 (104)
		u8 m_currentCratesCount; // 0x6C (108)
	}; // 0x70 (112)
}

