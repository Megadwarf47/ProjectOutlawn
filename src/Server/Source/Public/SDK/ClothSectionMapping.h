///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct ClothSectionMapping {
		ClothSectionMapping() {
			m_lodIndex = 0;
		};

		String m_clothMeshName; // 0x0 (0)
		Array<u32> m_subsetIds; // 0x8 (8)
		u32 m_lodIndex; // 0x10 (16)
	}; // 0x18 (24)
}

