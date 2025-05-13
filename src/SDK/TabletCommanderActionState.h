///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionState.h>
#include <fb/CommanderActionType.h>
#include <fb/TeamId.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderActionState {
		TabletCommanderActionState() {
			m_actionType = CommanderActionType::CommanderActionType_SectorScan;
			m_actionState = CommanderActionState::CommanderActionState_Disabled;
			m_teamId = TeamId::TeamNeutral;
			m_stateDuration = 0.f;
			m_radius = 0.f;
			m_targetX = 0;
			m_targetY = 0;
			m_isExcluded = false;
		};

		CommanderActionType m_actionType; // 0x0 (0)
		CommanderActionState m_actionState; // 0x4 (4)
		TeamId m_teamId; // 0x8 (8)
		float m_stateDuration; // 0xC (12)
		float m_radius; // 0x10 (16)
		u16 m_targetX; // 0x14 (20)
		u16 m_targetY; // 0x16 (22)
		bool m_isExcluded; // 0x18 (24)
	}; // 0x1C (28)
}

