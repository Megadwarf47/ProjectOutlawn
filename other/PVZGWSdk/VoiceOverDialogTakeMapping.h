///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct VoiceOverDialogTakeMapping {
		VoiceOverDialogTakeMapping() {
			m_takeControlMin = 0.f;
			m_takeControlMax = 0.f;
			m_takeIndex = 0;
		};

		float m_takeControlMin; // 0x0 (0)
		float m_takeControlMax; // 0x4 (4)
		u8 m_takeIndex; // 0x8 (8)
	}; // 0xC (12)
}

