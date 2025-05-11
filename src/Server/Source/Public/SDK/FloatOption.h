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
	struct FloatOption {
		FloatOption() {
			m_value = 1.f;
			m_min = 0.f;
			m_max = 1.f;
			m_step = 0.05f;
		};

		String m_name; // 0x0 (0)
		float m_value; // 0x8 (8)
		float m_min; // 0xC (12)
		float m_max; // 0x10 (16)
		float m_step; // 0x14 (20)
	}; // 0x18 (24)
}

