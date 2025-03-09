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
	struct ScoringBucketModifierData {
		ScoringBucketModifierData() {
			m_bucket = ScoringBucket::ScoringBucket_General;
			m_modifier = 0.f;
		};

		ScoringBucket m_bucket; // 0x0 (0)
		float m_modifier; // 0x4 (4)
	}; // 0x8 (8)
}

