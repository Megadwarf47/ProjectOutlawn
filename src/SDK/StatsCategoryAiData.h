///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatsCategoryGuidData.h>

namespace fb {
	class StatsCategoryAiData : public StatsCategoryGuidData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryAiData"); }
		virtual ~StatsCategoryAiData() override {}
		StatsCategoryAiData() {
			m_firstAiId = 0;
		};

		u32 m_firstAiId; // 0x28 (40)
	}; // 0x30 (48)
}

