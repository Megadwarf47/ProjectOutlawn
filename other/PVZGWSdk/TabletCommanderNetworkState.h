///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TabletCommanderNetworkState {
		TabletCommanderNetworkState() {
			m_id = 0;
			m_x = 0;
			m_y = 0;
			m_rotation = 0;
		};

		u32 m_id; // 0x0 (0)
		u16 m_x; // 0x4 (4)
		u16 m_y; // 0x6 (6)
		u8 m_rotation; // 0x8 (8)
	}; // 0xC (12)
}

