///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/TreeNodeBase.h>

namespace fb {
	class StatsCategoryBaseData;
}

namespace fb {
	class StatsCategoryBaseData : public TreeNodeBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryBaseData"); }
		virtual ~StatsCategoryBaseData() override {}
		StatsCategoryBaseData() {
		};

		RefArray<StatsCategoryBaseData> m_baseSubCategories; // 0x10 (16)
		String m_code; // 0x18 (24)
	}; // 0x20 (32)
}

