///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionType.h>
#include <fb/String.h>
#include <fb/TabletCommanderObjectiveType.h>
#include <fb/TeamId.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderObjective {
		TabletCommanderObjective() {
			m_objectiveId = 0;
			m_objectiveType = TabletCommanderObjectiveType::TabletCommanderObjectiveType_HomeBase;
			m_actionType = CommanderActionType::CommanderActionType_SectorScan;
			m_controllingTeamId = TeamId::TeamNeutral;
			m_capturingTeamId = TeamId::TeamNeutral;
			m_x = 0;
			m_y = 0;
			m_progressVelocity = 0;
			m_progressValue = 0;
			m_blink = false;
			m_isControlled = false;
		};

		String m_objectiveName; // 0x0 (0)
		String m_locationTextSid; // 0x8 (8)
		u32 m_objectiveId; // 0x10 (16)
		TabletCommanderObjectiveType m_objectiveType; // 0x14 (20)
		CommanderActionType m_actionType; // 0x18 (24)
		TeamId m_controllingTeamId; // 0x1C (28)
		TeamId m_capturingTeamId; // 0x20 (32)
		u16 m_x; // 0x24 (36)
		u16 m_y; // 0x26 (38)
		s16 m_progressVelocity; // 0x28 (40)
		u8 m_progressValue; // 0x2A (42)
		bool m_blink; // 0x2B (43)
		bool m_isControlled; // 0x2C (44)
	}; // 0x30 (48)
}

