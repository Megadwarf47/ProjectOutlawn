///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct FiringDispersionData {
		FiringDispersionData() {
			m_minAngle = 0.f;
			m_maxAngle = 0.f;
			m_increasePerShot = 0.f;
			m_decreasePerSecond = 5.f;
			m_yawMultiplier = 1.f;
			m_pitchMultiplier = 1.f;
		};

		float m_minAngle; // 0x0 (0)
		float m_maxAngle; // 0x4 (4)
		float m_increasePerShot; // 0x8 (8)
		float m_decreasePerSecond; // 0xC (12)
		float m_yawMultiplier; // 0x10 (16)
		float m_pitchMultiplier; // 0x14 (20)
	}; // 0x18 (24)
}

