///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class PartLinkData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PartLinkData"); }
		virtual ~PartLinkData() override {}
		PartLinkData() {
			m_partComponentIndex1 = 0;
			m_partComponentIndex2 = 0;
		};

		u32 m_partComponentIndex1; // 0x10 (16)
		u32 m_partComponentIndex2; // 0x14 (20)
	}; // 0x18 (24)
}

