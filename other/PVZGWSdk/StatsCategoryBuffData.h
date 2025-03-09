///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatsCategoryGuidData.h>

namespace fb {
	class StatsCategoryBuffData : public StatsCategoryGuidData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryBuffData"); }
		virtual ~StatsCategoryBuffData() override {}
		StatsCategoryBuffData() {
			m_firstBuffId = 0;
		};

		u32 m_firstBuffId; // 0x28 (40)
	}; // 0x30 (48)
}

