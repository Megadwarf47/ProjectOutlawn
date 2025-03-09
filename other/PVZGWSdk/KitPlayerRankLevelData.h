///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ScoringBucket.h>
#include <fb/Types.h>

namespace fb {
	struct KitPlayerRankLevelData {
		KitPlayerRankLevelData() {
			m_kitRankBucket = ScoringBucket::ScoringBucket_General;
		};

		Guid m_kitCustomizationGuid; // 0x0 (0)
		ScoringBucket m_kitRankBucket; // 0x10 (16)
	}; // 0x14 (20)
}

