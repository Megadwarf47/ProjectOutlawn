///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/ScoringBucket.h>
#include <fb/ScoringBucketType.h>
#include <fb/ScoringBucketUnlockData.h>
#include <fb/String.h>

namespace fb {
	class ScoringBucketData;
	class StatsCategoryBaseData;
}

namespace fb {
	class ScoringBucketData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScoringBucketData"); }
		virtual ~ScoringBucketData() override {}
		ScoringBucketData() {
			m_destinationBucket = ScoringBucket::ScoringBucket_General;
			m_bucketType = ScoringBucketType::ScoringBucketType_Disabled;
			m_roundScore = false;
			m_globalScore = false;
			m_includeInScoreStat = true;
			m_addToEntry = false;
		};

		ScoringBucket m_destinationBucket; // 0x10 (16)
		ScoringBucketType m_bucketType; // 0x14 (20)
		String m_name; // 0x18 (24)
		String m_rawName; // 0x20 (32)
		Array<ScoringBucketUnlockData> m_unlocks; // 0x28 (40)
		RefArray<StatsCategoryBaseData> m_connectedCategories; // 0x30 (48)
		CtrRef<ScoringBucketData> m_rankBucket; // 0x38 (56)
		bool m_roundScore; // 0x40 (64)
		bool m_globalScore; // 0x41 (65)
		bool m_includeInScoreStat; // 0x42 (66)
		bool m_addToEntry; // 0x43 (67)
	}; // 0x48 (72)
}

