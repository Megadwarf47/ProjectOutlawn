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
	struct ChallengeAwardStatus {
		ChallengeAwardStatus() {
			m_currentValue = 0;
			m_goalValue = 0;
		};

		String m_code; // 0x0 (0)
		u32 m_currentValue; // 0x8 (8)
		u32 m_goalValue; // 0xC (12)
	}; // 0x10 (16)
}

