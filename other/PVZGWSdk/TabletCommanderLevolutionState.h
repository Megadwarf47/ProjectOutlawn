///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LevolutionType.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderLevolutionState {
		TabletCommanderLevolutionState() {
			m_levolutionType = LevolutionType::LevolutionType_Setpiece;
			m_x = 0;
			m_y = 0;
			m_activated = false;
		};

		LevolutionType m_levolutionType; // 0x0 (0)
		String m_levolutionId; // 0x8 (8)
		u16 m_x; // 0x10 (16)
		u16 m_y; // 0x12 (18)
		bool m_activated; // 0x14 (20)
	}; // 0x18 (24)
}

