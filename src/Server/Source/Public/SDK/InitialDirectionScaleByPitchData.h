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
	struct InitialDirectionScaleByPitchData {
		InitialDirectionScaleByPitchData() {
			m_initialDirectionScale = Vec3(1.f, 1.f, 1.f);
			m_pitch = 0.f;
		};

		Vec3 m_initialDirectionScale; // 0x0 (0)
		float m_pitch; // 0x10 (16)
	}; // 0x20 (32)
}

