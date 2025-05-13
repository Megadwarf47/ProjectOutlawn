///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Types.h>
#include <fb/Vec2.h>

namespace fb {
	struct GroundHeightData {
		GroundHeightData() {
			m_worldSize = 1024.f;
		};

		float m_worldSize; // 0x0 (0)
		Vec2 m_heightSpan; // 0x4 (4)
		Array<u16> m_data; // 0x10 (16)
	}; // 0x18 (24)
}

