///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct RangeMapperEntry {
		RangeMapperEntry() {
			m_rangeStart = 0.f;
			m_rangeEnd = -1.f;
			m_outputValue = 0.f;
		};

		float m_rangeStart; // 0x0 (0)
		float m_rangeEnd; // 0x4 (4)
		float m_outputValue; // 0x8 (8)
	}; // 0xC (12)
}

