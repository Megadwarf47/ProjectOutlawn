///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct BlockAimAssistData {
		BlockAimAssistData() {
			m_blockingRadius = 25.f;
			m_lifeTime = 5.f;
		};

		float m_blockingRadius; // 0x0 (0)
		float m_lifeTime; // 0x4 (4)
	}; // 0x8 (8)
}

