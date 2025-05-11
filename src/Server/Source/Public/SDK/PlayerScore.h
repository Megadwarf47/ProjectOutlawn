///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct PlayerScore {
		PlayerScore() {
			m_rank = 0;
			m_kills = 0;
			m_deaths = 0;
			m_scoreMultiplier = 0;
			m_score = 0;
			m_globalScoreOriginal = 0;
			m_globalScoreUpdated = 0;
			m_time = 0.f;
			m_stats = 0;
		};

		s32 m_rank; // 0x0 (0)
		u32 m_kills; // 0x4 (4)
		u32 m_deaths; // 0x8 (8)
		u32 m_scoreMultiplier; // 0xC (12)
		s32 m_score; // 0x10 (16)
		s32 m_globalScoreOriginal; // 0x14 (20)
		s32 m_globalScoreUpdated; // 0x18 (24)
		float m_time; // 0x1C (28)
		u32 m_stats; // 0x20 (32)
	}; // 0x24 (36)
}

