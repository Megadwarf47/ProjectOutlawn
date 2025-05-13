///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntrySeatType.h>
#include <fb/Types.h>

namespace fb {
	struct EntryComponentHudData {
		EntryComponentHudData() {
			m_index = 0;
			m_seatType = EntrySeatType::EST_Driver;
			m_frustum = false;
			m_visible = true;
			m_maximizeMiniMapOnEntry = false;
		};

		s32 m_index; // 0x0 (0)
		EntrySeatType m_seatType; // 0x4 (4)
		bool m_frustum; // 0x8 (8)
		bool m_visible; // 0x9 (9)
		bool m_maximizeMiniMapOnEntry; // 0xA (10)
	}; // 0xC (12)
}

