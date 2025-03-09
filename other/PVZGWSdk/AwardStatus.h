///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CounterStatus.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct AwardStatus {
		AwardStatus() {
			m_currentValue = 0;
			m_originalValue = 0;
			m_isCounting = false;
		};

		String m_code; // 0x0 (0)
		u32 m_currentValue; // 0x8 (8)
		u32 m_originalValue; // 0xC (12)
		Array<CounterStatus> m_counters; // 0x10 (16)
		bool m_isCounting; // 0x18 (24)
	}; // 0x20 (32)
}

