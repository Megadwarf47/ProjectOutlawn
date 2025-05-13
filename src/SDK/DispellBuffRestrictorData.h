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
	class DispellBuffRestrictorData : public BuffRestrictorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DispellBuffRestrictorData"); }
		virtual ~DispellBuffRestrictorData() override {}
		DispellBuffRestrictorData() {
			m_dispellAllBuffs = false;
		};

		RefArray<BuffData> m_buffs; // 0x10 (16)
		bool m_dispellAllBuffs; // 0x18 (24)
	}; // 0x20 (32)
}

