///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatsCategoryGuidData.h>

namespace fb {
	class StatsCategoryKitData : public StatsCategoryGuidData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryKitData"); }
		virtual ~StatsCategoryKitData() override {}
		StatsCategoryKitData() {
			m_firstCustomizationId = 0;
		};

		u32 m_firstCustomizationId; // 0x28 (40)
	}; // 0x30 (48)
}

