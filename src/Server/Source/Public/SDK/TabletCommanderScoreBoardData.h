///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TabletCommanderScoreBoardData {
		TabletCommanderScoreBoardData() {
			m_id = 0;
			m_score = 0;
			m_kills = 0;
			m_deaths = 0;
			m_rank = 0;
		};

		u32 m_id; // 0x0 (0)
		u32 m_score; // 0x4 (4)
		u16 m_kills; // 0x8 (8)
		u16 m_deaths; // 0xA (10)
		u16 m_rank; // 0xC (12)
	}; // 0x10 (16)
}

