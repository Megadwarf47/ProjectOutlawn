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
	struct StatCounterStatus {
		StatCounterStatus() {
			m_currentValue = 0.f;
		};

		String m_code; // 0x0 (0)
		float m_currentValue; // 0x8 (8)
	}; // 0x10 (16)
}

