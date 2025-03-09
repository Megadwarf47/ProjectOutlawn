///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct ClothStateSetupTransitionLookup {
		ClothStateSetupTransitionLookup() {
			m_firstTransitionableLodIndex = 0;
			m_transitionableLodCount = 0;
		};

		u32 m_firstTransitionableLodIndex; // 0x0 (0)
		u32 m_transitionableLodCount; // 0x4 (4)
	}; // 0x8 (8)
}

