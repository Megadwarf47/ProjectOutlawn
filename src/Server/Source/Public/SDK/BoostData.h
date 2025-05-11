///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/ScoringBucketModifierData.h>
#include <fb/String.h>

namespace fb {
	class BoostData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoostData"); }
		virtual ~BoostData() override {}
		BoostData() {
			m_scoreModifier = 1.f;
			m_identifier = 0;
			m_delayPersistingActivationsUntilStatsUpload = false;
		};

		String m_key; // 0x18 (24)
		float m_scoreModifier; // 0x20 (32)
		Array<ScoringBucketModifierData> m_scoringBucketModifiers; // 0x28 (40)
		u32 m_identifier; // 0x30 (48)
		bool m_delayPersistingActivationsUntilStatsUpload; // 0x34 (52)
	}; // 0x38 (56)
}

