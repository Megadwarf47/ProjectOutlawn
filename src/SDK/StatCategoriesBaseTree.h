///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/TreeBase.h>

namespace fb {
	class CriteriaData;
	class StatsCategoryBaseData;
}

namespace fb {
	class StatCategoriesBaseTree : public TreeBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatCategoriesBaseTree"); }
		virtual ~StatCategoriesBaseTree() override {}
		StatCategoriesBaseTree() {
			m_processAllLevelsInTree = false;
		};

		RefArray<StatsCategoryBaseData> m_rootBaseCategories; // 0x18 (24)
		RefArray<CriteriaData> m_paramX; // 0x20 (32)
		RefArray<CriteriaData> m_paramY; // 0x28 (40)
		bool m_processAllLevelsInTree; // 0x30 (48)
	}; // 0x38 (56)
}

