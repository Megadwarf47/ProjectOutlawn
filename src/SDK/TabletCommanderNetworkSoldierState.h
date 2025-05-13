///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TabletCommanderNetworkState.h>
#include <fb/Types.h>
#include <fb/UIHudIcon.h>

namespace fb {
	struct TabletCommanderNetworkSoldierState {
		TabletCommanderNetworkSoldierState() {
			m_inVehicleId = 0;
			m_soldierKit = UIHudIcon::UIHudIcon_Unused;
			m_isSquadLeader = false;
			m_isOnKillStreak = false;
			m_isHighValueTarget = false;
			m_isFiring = false;
		};

		TabletCommanderNetworkState m_networkState; // 0x0 (0)
		u32 m_inVehicleId; // 0xC (12)
		UIHudIcon m_soldierKit; // 0x10 (16)
		bool m_isSquadLeader; // 0x14 (20)
		bool m_isOnKillStreak; // 0x15 (21)
		bool m_isHighValueTarget; // 0x16 (22)
		bool m_isFiring; // 0x17 (23)
	}; // 0x18 (24)
}

