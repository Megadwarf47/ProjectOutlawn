///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BundleHeapInfo.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct SubLevelBundleInfo {
		SubLevelBundleInfo() {
			m_compartmentIndex = 0;
			m_subLevelNameInx = 0;
			m_subLevelId = 0;
			m_parentSubLevelId = 0;
			m_priority = 0;
			m_isBlueprintBundle = false;
		};

		s32 m_compartmentIndex; // 0x0 (0)
		BundleHeapInfo m_heapInfo; // 0x4 (4)
		String m_name; // 0x10 (16)
		u16 m_subLevelNameInx; // 0x18 (24)
		u16 m_subLevelId; // 0x1A (26)
		u16 m_parentSubLevelId; // 0x1C (28)
		u8 m_priority; // 0x1E (30)
		bool m_isBlueprintBundle; // 0x1F (31)
	}; // 0x20 (32)
}

