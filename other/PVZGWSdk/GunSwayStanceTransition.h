///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GunSwayDispersionData.h>
#include <fb/Types.h>

namespace fb {
	struct GunSwayStanceTransition {
		GunSwayStanceTransition() {
			m_coolDown = 0.f;
		};

		GunSwayDispersionData m_maxPenaltyValue; // 0x0 (0)
		float m_coolDown; // 0x10 (16)
	}; // 0x14 (20)
}

