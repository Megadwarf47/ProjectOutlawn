///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/RefArray.h>
#include <fb/StatsCategoryBaseData.h>

namespace fb {
	class StatsCategoryData;
}

namespace fb {
	class StatsCategoryData : public StatsCategoryBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryData"); }
		virtual ~StatsCategoryData() override {}
		StatsCategoryData() {
		};

		RefArray<StatsCategoryData> m_categories; // 0x20 (32)
		Array<String> m_members; // 0x28 (40)
	}; // 0x30 (48)
}

