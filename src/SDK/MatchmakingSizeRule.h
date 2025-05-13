///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MatchmakingSizeConfiguration.h>
#include <fb/String.h>

namespace fb {
	struct MatchmakingSizeRule {
		MatchmakingSizeRule() {
		};

		String m_setting; // 0x0 (0)
		Array<MatchmakingSizeConfiguration> m_configurations; // 0x8 (8)
	}; // 0x10 (16)
}

