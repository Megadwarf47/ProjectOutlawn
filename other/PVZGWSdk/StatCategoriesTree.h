///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/StatCategoriesBaseTree.h>

namespace fb {
	class StatsCategoryData;
}

namespace fb {
	class StatCategoriesTree : public StatCategoriesBaseTree {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatCategoriesTree"); }
		virtual ~StatCategoriesTree() override {}
		StatCategoriesTree() {
		};

		RefArray<StatsCategoryData> m_categories; // 0x38 (56)
	}; // 0x40 (64)
}

