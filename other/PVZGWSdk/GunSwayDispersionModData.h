///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct GunSwayDispersionModData {
		GunSwayDispersionModData() {
			m_minAngleModifier = 1.f;
			m_maxAngleModifier = 1.f;
			m_increasePerShotModifier = 1.f;
			m_decreasePerSecondModifier = 1.f;
		};

		float m_minAngleModifier; // 0x0 (0)
		float m_maxAngleModifier; // 0x4 (4)
		float m_increasePerShotModifier; // 0x8 (8)
		float m_decreasePerSecondModifier; // 0xC (12)
	}; // 0x10 (16)
}

