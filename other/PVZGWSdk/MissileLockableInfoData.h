///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct MissileLockableInfoData {
		MissileLockableInfoData() {
			m_heatSignature = 0.f;
			m_radarSignature = 0.f;
		};

		float m_heatSignature; // 0x0 (0)
		float m_radarSignature; // 0x4 (4)
	}; // 0x8 (8)
}

