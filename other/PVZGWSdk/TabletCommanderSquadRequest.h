///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionType.h>
#include <fb/SquadId.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderSquadRequest {
		TabletCommanderSquadRequest() {
			m_squadId = SquadId::SquadNone;
			m_actionType = CommanderActionType::CommanderActionType_SectorScan;
			m_controlPointId = 0;
			m_targetX = 0;
			m_targetY = 0;
		};

		SquadId m_squadId; // 0x0 (0)
		CommanderActionType m_actionType; // 0x4 (4)
		u32 m_controlPointId; // 0x8 (8)
		u16 m_targetX; // 0xC (12)
		u16 m_targetY; // 0xE (14)
	}; // 0x10 (16)
}

