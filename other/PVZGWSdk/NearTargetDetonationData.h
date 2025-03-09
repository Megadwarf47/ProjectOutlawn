///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct NearTargetDetonationData {
		NearTargetDetonationData() {
			m_detonationRadius = 10.f;
			m_maxDetonationDelay = 3.f;
			m_minDetonationDelay = 0.f;
			m_detonateNearTarget = false;
		};

		float m_detonationRadius; // 0x0 (0)
		float m_maxDetonationDelay; // 0x4 (4)
		float m_minDetonationDelay; // 0x8 (8)
		bool m_detonateNearTarget; // 0xC (12)
	}; // 0x10 (16)
}

