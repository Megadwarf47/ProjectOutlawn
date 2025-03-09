///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TeamId.h>
#include <fb/Types.h>

namespace fb {
	struct AreaValueTeam {
		AreaValueTeam() {
			m_areaValue = 100;
			m_team = TeamId::TeamNeutral;
		};

		s32 m_areaValue; // 0x0 (0)
		TeamId m_team; // 0x4 (4)
	}; // 0x8 (8)
}

