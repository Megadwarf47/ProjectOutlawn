///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct RankChallengeMapping {
		RankChallengeMapping() {
			m_startRank = 0;
			m_endRank = 0;
			m_startChallengeLevel = 0;
			m_numChallengeLevelsToRepeat = 3;
		};

		u32 m_startRank; // 0x0 (0)
		u32 m_endRank; // 0x4 (4)
		u32 m_startChallengeLevel; // 0x8 (8)
		u32 m_numChallengeLevelsToRepeat; // 0xC (12)
	}; // 0x10 (16)
}

