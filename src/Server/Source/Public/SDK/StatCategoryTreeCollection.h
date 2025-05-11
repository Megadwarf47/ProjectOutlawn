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
	class StatCategoriesBaseTree;
}

namespace fb {
	class StatCategoryTreeCollection : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatCategoryTreeCollection"); }
		virtual ~StatCategoryTreeCollection() override {}
		StatCategoryTreeCollection() {
		};

		RefArray<StatCategoriesBaseTree> m_categoryTrees; // 0x18 (24)
	}; // 0x20 (32)
}

