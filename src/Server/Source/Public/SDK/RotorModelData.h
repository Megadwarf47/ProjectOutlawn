///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct RotorModelData {
		RotorModelData() {
			m_rotationRpm = 0.f;
			m_partIndex = 4294967295;
		};

		float m_rotationRpm; // 0x0 (0)
		u32 m_partIndex; // 0x4 (4)
	}; // 0x8 (8)
}

