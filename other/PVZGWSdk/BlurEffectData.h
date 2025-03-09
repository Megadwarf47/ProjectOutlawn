///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct BlurEffectData {
		BlurEffectData() {
			m_dispersionStrength = 0.5f;
			m_dispersionThreshhold = 0.1f;
			m_explosionStrength = 0.5f;
			m_bulletStrength = 0.5f;
			m_explosionFalloffSpeed = 0.5f;
			m_bulletFalloffSpeed = 0.5f;
		};

		float m_dispersionStrength; // 0x0 (0)
		float m_dispersionThreshhold; // 0x4 (4)
		float m_explosionStrength; // 0x8 (8)
		float m_bulletStrength; // 0xC (12)
		float m_explosionFalloffSpeed; // 0x10 (16)
		float m_bulletFalloffSpeed; // 0x14 (20)
	}; // 0x18 (24)
}

