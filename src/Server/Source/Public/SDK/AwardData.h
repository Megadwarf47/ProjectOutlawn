///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AbstractAwardData.h>
#include <fb/Array.h>
#include <fb/AwardGroup.h>
#include <fb/AwardKitAssociation.h>
#include <fb/AwardType.h>
#include <fb/BasicUnlockInfo.h>
#include <fb/CriteriaAward.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/ScoringBucket.h>
#include <fb/StatsMultiplicity.h>
#include <fb/String.h>

namespace fb {
	class AwardData;
	class CriteriaData;
	class CriteriaGateList;
}

namespace fb {
	class AwardData : public AbstractAwardData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardData"); }
		virtual ~AwardData() override {}
		AwardData() {
			m_kitAssociation = AwardKitAssociation::AwardKitAssociation_Undefined;
			m_repeat = AwardType::AwardType_OnceGlobally;
			m_maxRepetitions = 1;
			m_group = AwardGroup::AwardGroup_Undefined;
			m_multiplicity = StatsMultiplicity::StatsMultiplicity_Solo;
			m_score = 0.f;
			m_secondaryScore = 0.f;
			m_bucket = ScoringBucket::ScoringBucket_Award;
			m_visible = true;
			m_criteriaVisibleWithoutLicense = true;
			m_activeOnCreation = true;
		};

		RefArray<AwardData> m_filteredChildAwards; // 0x10 (16)
		RefArray<CriteriaData> m_criteria; // 0x18 (24)
		String m_code; // 0x20 (32)
		String m_title; // 0x28 (40)
		String m_description; // 0x30 (48)
		String m_nameSid; // 0x38 (56)
		AwardKitAssociation m_kitAssociation; // 0x40 (64)
		String m_imageName; // 0x48 (72)
		String m_imageSmallName; // 0x50 (80)
		String m_imageFancyName; // 0x58 (88)
		String m_soundName; // 0x60 (96)
		AwardType m_repeat; // 0x68 (104)
		u32 m_maxRepetitions; // 0x6C (108)
		Array<CriteriaAward> m_dependencies; // 0x70 (112)
		AwardGroup m_group; // 0x78 (120)
		StatsMultiplicity m_multiplicity; // 0x7C (124)
		CtrRef<AwardData> m_parentAward; // 0x80 (128)
		float m_score; // 0x88 (136)
		float m_secondaryScore; // 0x8C (140)
		ScoringBucket m_bucket; // 0x90 (144)
		Array<BasicUnlockInfo> m_unlockInfos; // 0x98 (152)
		CtrRef<CriteriaGateList> m_unlockGates; // 0xA0 (160)
		Array<String> m_licenses; // 0xA8 (168)
		bool m_visible; // 0xB0 (176)
		bool m_criteriaVisibleWithoutLicense; // 0xB1 (177)
		bool m_activeOnCreation; // 0xB2 (178)
	}; // 0xB8 (184)
}

