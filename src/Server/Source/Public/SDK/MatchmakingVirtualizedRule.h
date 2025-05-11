///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MatchmakingVirtualizationMode.h>
#include <fb/String.h>

namespace fb {
	struct MatchmakingVirtualizedRule {
		MatchmakingVirtualizedRule() {
			m_virtualizationMode = MatchmakingVirtualizationMode::MatchmakingVirtualizationMode_Any;
		};

		String m_minFitThreshold; // 0x0 (0)
		MatchmakingVirtualizationMode m_virtualizationMode; // 0x8 (8)
	}; // 0x10 (16)
}

