///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CriteriaStarCategoryInstance.h>
#include <fb/DataContainer.h>

namespace fb {
	class CriteriaStarCategoryData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CriteriaStarCategoryData"); }
		virtual ~CriteriaStarCategoryData() override {}
		CriteriaStarCategoryData() {
		};

		Array<CriteriaStarCategoryInstance> m_criteriaInstances; // 0x10 (16)
	}; // 0x18 (24)
}

