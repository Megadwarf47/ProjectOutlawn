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
	struct HealthScaleThreshold {
		HealthScaleThreshold() {
			m_consecutiveDeaths = 0;
			m_healthMultiplier = 0.f;
		};

		u32 m_consecutiveDeaths; // 0x0 (0)
		float m_healthMultiplier; // 0x4 (4)
		String m_uiDisplaySid; // 0x8 (8)
	}; // 0x10 (16)
}

