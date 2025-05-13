///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct MirrorDamageTrapezoid {
		MirrorDamageTrapezoid() {
			m_damage = 80.f;
			m_length = 3.f;
			m_nearWidth = 2.f;
			m_farWidth = 1.f;
		};

		Vec3 m_offset; // 0x0 (0)
		float m_damage; // 0x10 (16)
		float m_length; // 0x14 (20)
		float m_nearWidth; // 0x18 (24)
		float m_farWidth; // 0x1C (28)
	}; // 0x20 (32)
}

