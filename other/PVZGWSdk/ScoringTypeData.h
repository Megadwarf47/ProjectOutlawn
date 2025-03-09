///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/ScoringBucket.h>
#include <fb/ScoringVisibilityType.h>
#include <fb/StatEvent.h>
#include <fb/String.h>

namespace fb {
	class StatsCategoryBaseData;
}

namespace fb {
	class ScoringTypeData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScoringTypeData"); }
		virtual ~ScoringTypeData() override {}
		ScoringTypeData() {
			m_measuring = StatEvent::StatEvent_Invalid;
			m_limit = 0.f;
			m_visibilityType = ScoringVisibilityType::ScoringVisibilityType_Major;
			m_bucket = ScoringBucket::ScoringBucket_General;
			m_score = 0.f;
			m_additionalValueMultiplier = 0.f;
			m_showForTeam = false;
		};

		StatEvent m_measuring; // 0x10 (16)
		CtrRef<StatsCategoryBaseData> m_paramX; // 0x18 (24)
		CtrRef<StatsCategoryBaseData> m_paramY; // 0x20 (32)
		float m_limit; // 0x28 (40)
		String m_descriptionSid; // 0x30 (48)
		ScoringVisibilityType m_visibilityType; // 0x38 (56)
		ScoringBucket m_bucket; // 0x3C (60)
		float m_score; // 0x40 (64)
		float m_additionalValueMultiplier; // 0x44 (68)
		bool m_showForTeam; // 0x48 (72)
	}; // 0x50 (80)
}

