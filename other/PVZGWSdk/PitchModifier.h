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
	struct PitchModifier {
		PitchModifier() {
			m_pitchVal = 0.f;
			m_pitchAngle = 0.f;
		};

		Vec3 m_offset; // 0x0 (0)
		float m_pitchVal; // 0x10 (16)
		float m_pitchAngle; // 0x14 (20)
	}; // 0x20 (32)
}

