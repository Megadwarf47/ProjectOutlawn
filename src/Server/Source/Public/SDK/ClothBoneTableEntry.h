///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct ClothBoneTableEntry {
		ClothBoneTableEntry() {
			m_transformIndex = 0;
		};

		String m_boneName; // 0x0 (0)
		u32 m_transformIndex; // 0x8 (8)
	}; // 0x10 (16)
}

