///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class ScoringBucketData;
	class ScoringHandlerData;
	class ScoringTypeData;
}

namespace fb {
	class ScoringData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScoringData"); }
		virtual ~ScoringData() override {}
		ScoringData() {
		};

		RefArray<ScoringTypeData> m_scoringTypes; // 0x18 (24)
		RefArray<ScoringHandlerData> m_scoringHandlers; // 0x20 (32)
		RefArray<ScoringBucketData> m_buckets; // 0x28 (40)
	}; // 0x30 (48)
}

