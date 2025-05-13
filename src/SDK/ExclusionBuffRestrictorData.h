///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffRestrictorData.h>
#include <fb/RefArray.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class ExclusionBuffRestrictorData : public BuffRestrictorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExclusionBuffRestrictorData"); }
		virtual ~ExclusionBuffRestrictorData() override {}
		ExclusionBuffRestrictorData() {
		};

		RefArray<BuffData> m_buffs; // 0x10 (16)
	}; // 0x18 (24)
}

