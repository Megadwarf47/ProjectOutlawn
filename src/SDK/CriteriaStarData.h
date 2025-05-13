///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CriteriaData.h>
#include <fb/CtrRef.h>

namespace fb {
	class CriteriaStarCategoryData;
}

namespace fb {
	class CriteriaStarData : public CriteriaData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CriteriaStarData"); }
		virtual ~CriteriaStarData() override {}
		CriteriaStarData() {
		};

		CtrRef<CriteriaStarCategoryData> m_starTemplate; // 0x60 (96)
	}; // 0x68 (104)
}

