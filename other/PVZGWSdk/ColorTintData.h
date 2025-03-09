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
	struct ColorTintData {
		ColorTintData() {
			m_contrast = Vec3(1.f, 1.f, 1.f);
			m_brightness = Vec3(1.f, 1.f, 1.f);
			m_saturation = Vec3(1.f, 1.f, 1.f);
			m_hue = 0.f;
		};

		Vec3 m_contrast; // 0x0 (0)
		Vec3 m_brightness; // 0x10 (16)
		Vec3 m_saturation; // 0x20 (32)
		float m_hue; // 0x30 (48)
	}; // 0x40 (64)
}

