///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MatchmakingRuleString.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct MatchmakingGenericRule {
		MatchmakingGenericRule() {
			m_ignoreIfDefault = false;
			m_mergeValues = false;
			m_sortValues = false;
		};

		String m_rule; // 0x0 (0)
		String m_minFitThresHold; // 0x8 (8)
		String m_setting; // 0x10 (16)
		Array<MatchmakingRuleString> m_desiredValues; // 0x18 (24)
		bool m_ignoreIfDefault; // 0x20 (32)
		bool m_mergeValues; // 0x21 (33)
		bool m_sortValues; // 0x22 (34)
	}; // 0x28 (40)
}

