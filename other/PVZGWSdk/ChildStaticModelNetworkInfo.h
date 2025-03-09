///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/IndexRange.h>
#include <fb/Types.h>

namespace fb {
	struct ChildStaticModelNetworkInfo {
		ChildStaticModelNetworkInfo() {
			m_parentPartComponentIndex = 0;
			m_parentHealthStateIndex = 0;
			m_instanceIndex = 0;
		};

		IndexRange m_networkRange; // 0x0 (0)
		u32 m_parentPartComponentIndex; // 0x8 (8)
		u32 m_parentHealthStateIndex; // 0xC (12)
		u32 m_instanceIndex; // 0x10 (16)
	}; // 0x14 (20)
}

