///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct GunSwayDispersionData {
		GunSwayDispersionData() {
			m_minAngle = 0.f;
			m_maxAngle = 5.5f;
			m_increasePerShot = 1.8f;
			m_decreasePerSecond = 15.f;
		};

		float m_minAngle; // 0x0 (0)
		float m_maxAngle; // 0x4 (4)
		float m_increasePerShot; // 0x8 (8)
		float m_decreasePerSecond; // 0xC (12)
	}; // 0x10 (16)
}

