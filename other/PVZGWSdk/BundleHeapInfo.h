///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BundleHeapType.h>
#include <fb/Types.h>

namespace fb {
	struct BundleHeapInfo {
		BundleHeapInfo() {
			m_heapType = BundleHeapType::BundleHeapType_Parent;
			m_initialSize = 0;
			m_allowGrow = true;
		};

		BundleHeapType m_heapType; // 0x0 (0)
		u32 m_initialSize; // 0x4 (4)
		bool m_allowGrow; // 0x8 (8)
	}; // 0xC (12)
}

