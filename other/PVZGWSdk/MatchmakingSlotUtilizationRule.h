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
	struct MatchmakingSlotUtilizationRule {
		MatchmakingSlotUtilizationRule() {
			m_preferredPercentage = 75;
			m_minPercentage = 0;
			m_maxPercentage = 100;
		};

		u32 m_preferredPercentage; // 0x0 (0)
		u32 m_minPercentage; // 0x4 (4)
		u32 m_maxPercentage; // 0x8 (8)
		String m_rangeOffsetListName; // 0x10 (16)
	}; // 0x18 (24)
}

