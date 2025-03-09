///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MatchmakingGenericRule.h>
#include <fb/MatchmakingHostViabilityRule.h>
#include <fb/MatchmakingModRule.h>
#include <fb/MatchmakingPingSiteRule.h>
#include <fb/MatchmakingRankedRule.h>
#include <fb/MatchmakingSizeRule.h>
#include <fb/MatchmakingSlotUtilizationRule.h>
#include <fb/MatchmakingUserExtendedDataRule.h>
#include <fb/MatchmakingVirtualizedRule.h>

namespace fb {
	struct MatchmakingCriteria {
		MatchmakingCriteria() {
		};

		MatchmakingSizeRule m_sizeRule; // 0x0 (0)
		MatchmakingPingSiteRule m_pingSiteRule; // 0x10 (16)
		MatchmakingRankedRule m_rankedRule; // 0x18 (24)
		Array<MatchmakingGenericRule> m_genericRules; // 0x20 (32)
		MatchmakingVirtualizedRule m_virtualizedRule; // 0x28 (40)
		Array<MatchmakingUserExtendedDataRule> m_uedRules; // 0x38 (56)
		MatchmakingModRule m_modRule; // 0x40 (64)
		MatchmakingSlotUtilizationRule m_slotUtilizationRule; // 0x50 (80)
		MatchmakingHostViabilityRule m_hostViabilityRule; // 0x68 (104)
	}; // 0x70 (112)
}

