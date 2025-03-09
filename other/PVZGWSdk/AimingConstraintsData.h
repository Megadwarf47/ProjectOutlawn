///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct AimingConstraintsData {
		AimingConstraintsData() {
			m_minYaw = -180.f;
			m_maxYaw = 180.f;
			m_minPitch = -45.f;
			m_maxPitch = 45.f;
		};

		float m_minYaw; // 0x0 (0)
		float m_maxYaw; // 0x4 (4)
		float m_minPitch; // 0x8 (8)
		float m_maxPitch; // 0xC (12)
	}; // 0x10 (16)
}

