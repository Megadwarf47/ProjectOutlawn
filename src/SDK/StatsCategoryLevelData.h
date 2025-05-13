///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatsCategoryGuidData.h>
#include <fb/String.h>

namespace fb {
	class StatsCategoryLevelData : public StatsCategoryGuidData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryLevelData"); }
		virtual ~StatsCategoryLevelData() override {}
		StatsCategoryLevelData() {
		};

		String m_nodeNameNotMeta; // 0x28 (40)
	}; // 0x30 (48)
}

