///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MatchmakingPlatform.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct MatchmakingRuleString {
		MatchmakingRuleString() {
			m_platform = MatchmakingPlatform::MatchmakingPlatform_Any;
			m_useOnlyIfEmpty = false;
		};

		String m_value; // 0x0 (0)
		MatchmakingPlatform m_platform; // 0x8 (8)
		Array<String> m_licenses; // 0x10 (16)
		bool m_useOnlyIfEmpty; // 0x18 (24)
	}; // 0x20 (32)
}

