///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/TreeBase.h>

namespace fb {
	class CriteriaData;
	class StatCategoryTreeCollection;
}

namespace fb {
	class AwardableTreeBase : public TreeBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardableTreeBase"); }
		virtual ~AwardableTreeBase() override {}
		AwardableTreeBase() {
			m_generalStatistics = false;
		};

		CtrRef<StatCategoryTreeCollection> m_statCategoryTreeCollection; // 0x18 (24)
		RefArray<CriteriaData> m_generalCriteria; // 0x20 (32)
		bool m_generalStatistics; // 0x28 (40)
	}; // 0x30 (48)
}

