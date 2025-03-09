///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct Boost {
		Boost() {
			m_forwardStrength = 1.f;
			m_reverseStrength = 1.f;
			m_dissipationTime = 1.f;
			m_recoveryTime = 1.f;
			m_crawlStrength = 1.f;
			m_accelerationScale = 1.f;
		};

		float m_forwardStrength; // 0x0 (0)
		float m_reverseStrength; // 0x4 (4)
		float m_dissipationTime; // 0x8 (8)
		float m_recoveryTime; // 0xC (12)
		float m_crawlStrength; // 0x10 (16)
		float m_accelerationScale; // 0x14 (20)
	}; // 0x18 (24)
}

