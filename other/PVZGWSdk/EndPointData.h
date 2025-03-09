///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct EndPointData {
		EndPointData() {
			m_pos = 0.f;
			m_endDamping = 0.2f;
			m_springLength = 0.f;
			m_springAcceleration = 1.f;
			m_springDamping = 0.f;
		};

		float m_pos; // 0x0 (0)
		float m_endDamping; // 0x4 (4)
		float m_springLength; // 0x8 (8)
		float m_springAcceleration; // 0xC (12)
		float m_springDamping; // 0x10 (16)
	}; // 0x14 (20)
}

