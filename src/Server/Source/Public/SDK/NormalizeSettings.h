///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct NormalizeSettings {
		NormalizeSettings() {
			m_minimum = -180.f;
			m_maximum = 180.f;
			m_lower = 0.f;
			m_upper = 1.f;
			m_velocity = 0.f;
			m_normalize = false;
		};

		float m_minimum; // 0x0 (0)
		float m_maximum; // 0x4 (4)
		float m_lower; // 0x8 (8)
		float m_upper; // 0xC (12)
		float m_velocity; // 0x10 (16)
		bool m_normalize; // 0x14 (20)
	}; // 0x18 (24)
}

