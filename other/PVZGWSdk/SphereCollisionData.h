///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SphereCollisionData {
		SphereCollisionData() {
			m_extraRadius = 1.2f;
			m_counterNormalBrakeForceMod = 5.f;
			m_enabled = false;
		};

		float m_extraRadius; // 0x0 (0)
		float m_counterNormalBrakeForceMod; // 0x4 (4)
		bool m_enabled; // 0x8 (8)
	}; // 0xC (12)
}

