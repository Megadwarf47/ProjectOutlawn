///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct ActionSuppressor {
		ActionSuppressor() {
			m_actionToSuppress = 0;
			m_suppressingValue = 0.f;
		};

		s32 m_actionToSuppress; // 0x0 (0)
		float m_suppressingValue; // 0x4 (4)
	}; // 0x8 (8)
}

