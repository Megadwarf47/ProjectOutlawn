///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AbstractPersistentStatRef.h>
#include <fb/CtrRef.h>

namespace fb {
	class AwardData;
	class CriteriaData;
	class StatsCategoryBaseData;
}

namespace fb {
	class PersistentCriteriaStatRef : public AbstractPersistentStatRef {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistentCriteriaStatRef"); }
		virtual ~PersistentCriteriaStatRef() override {}
		PersistentCriteriaStatRef() {
		};

		CtrRef<CriteriaData> m_criteria; // 0x10 (16)
		CtrRef<StatsCategoryBaseData> m_paramX; // 0x18 (24)
		CtrRef<StatsCategoryBaseData> m_paramY; // 0x20 (32)
		CtrRef<AwardData> m_criteriaOwner; // 0x28 (40)
	}; // 0x30 (48)
}

