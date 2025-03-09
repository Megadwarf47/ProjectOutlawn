///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SquadId.h>
#include <fb/String.h>
#include <fb/TeamId.h>
#include <fb/Types.h>
#include <fb/UIHudIcon.h>

namespace fb {
	struct TabletCommanderPlayerData {
		TabletCommanderPlayerData() {
			m_id = 0;
			m_teamId = TeamId::TeamNeutral;
			m_squadId = SquadId::SquadNone;
			m_soldierKit = UIHudIcon::UIHudIcon_Unused;
			m_isSquadLeader = false;
			m_isAlive = false;
		};

		u32 m_id; // 0x0 (0)
		String m_name; // 0x8 (8)
		TeamId m_teamId; // 0x10 (16)
		SquadId m_squadId; // 0x14 (20)
		UIHudIcon m_soldierKit; // 0x18 (24)
		bool m_isSquadLeader; // 0x1C (28)
		bool m_isAlive; // 0x1D (29)
	}; // 0x20 (32)
}

