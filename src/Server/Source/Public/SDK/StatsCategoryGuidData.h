///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/StatsCategoryBaseData.h>

namespace fb {
	class StatsCategoryGuidData : public StatsCategoryBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryGuidData"); }
		virtual ~StatsCategoryGuidData() override {}
		StatsCategoryGuidData() {
		};

		Array<Guid> m_objectInstanceGuids; // 0x20 (32)
	}; // 0x28 (40)
}

