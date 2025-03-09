///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct ClothStateSetupTransition {
		ClothStateSetupTransition() {
			m_transitionLodIndex = 0;
			m_transitionLodStateIndex = 0;
		};

		u32 m_transitionLodIndex; // 0x0 (0)
		u32 m_transitionLodStateIndex; // 0x4 (4)
	}; // 0x8 (8)
}

