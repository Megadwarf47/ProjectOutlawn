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
	struct MatchmakingSizeConfiguration {
		MatchmakingSizeConfiguration() {
			m_platform = MatchmakingPlatform::MatchmakingPlatform_PC;
			m_desiredPlayerCount = 0;
			m_minPlayerCount = 0;
			m_maxPlayerCapacity = 0;
		};

		MatchmakingPlatform m_platform; // 0x0 (0)
		Array<String> m_settings; // 0x8 (8)
		u32 m_desiredPlayerCount; // 0x10 (16)
		u32 m_minPlayerCount; // 0x14 (20)
		u32 m_maxPlayerCapacity; // 0x18 (24)
		String m_minFitThreshold; // 0x20 (32)
	}; // 0x28 (40)
}

