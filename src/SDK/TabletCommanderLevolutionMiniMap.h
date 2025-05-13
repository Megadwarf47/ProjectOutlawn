///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderLevolutionMiniMap {
		TabletCommanderLevolutionMiniMap() {
			m_size = 0.f;
			m_x = 0;
			m_y = 0;
			m_isPatch = false;
		};

		String m_tag; // 0x0 (0)
		float m_size; // 0x8 (8)
		u16 m_x; // 0xC (12)
		u16 m_y; // 0xE (14)
		bool m_isPatch; // 0x10 (16)
	}; // 0x18 (24)
}

