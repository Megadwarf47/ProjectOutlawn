///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/TeamAssignMode.h>
#include <fb/TeamId.h>

namespace fb {
	class AutoTeamEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AutoTeamEntityData"); }
		virtual ~AutoTeamEntityData() override {}
		AutoTeamEntityData() {
			m_teamAssignMode = TeamAssignMode::TamEqualTeams;
			m_playerCountNeededToAutoBalance = 8;
			m_teamDifferenceToAutoBalance = 3;
			m_oneTeamAssignModeTeam = TeamId::Team1;
			m_forceIntoSquad = false;
			m_enableSquads = true;
			m_rotateTeamOnNewRound = true;
			m_autoBalance = true;
			m_allowManualTeamSwitch = true;
		};

		TeamAssignMode m_teamAssignMode; // 0x18 (24)
		u32 m_playerCountNeededToAutoBalance; // 0x1C (28)
		u32 m_teamDifferenceToAutoBalance; // 0x20 (32)
		TeamId m_oneTeamAssignModeTeam; // 0x24 (36)
		bool m_forceIntoSquad; // 0x28 (40)
		bool m_enableSquads; // 0x29 (41)
		bool m_rotateTeamOnNewRound; // 0x2A (42)
		bool m_autoBalance; // 0x2B (43)
		bool m_allowManualTeamSwitch; // 0x2C (44)
	}; // 0x30 (48)
}

