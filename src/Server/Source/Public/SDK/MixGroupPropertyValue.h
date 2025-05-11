///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct MixGroupPropertyValue {
		MixGroupPropertyValue() {
			m_property = 0;
			m_value = 0.f;
			m_controlled = false;
		};

		u32 m_property; // 0x0 (0)
		float m_value; // 0x4 (4)
		bool m_controlled; // 0x8 (8)
	}; // 0xC (12)
}

