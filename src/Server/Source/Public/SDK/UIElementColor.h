///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct UIElementColor {
		UIElementColor() {
			m_rgb = Vec3(1.f, 1.f, 1.f);
			m_alpha = 1.f;
		};

		Vec3 m_rgb; // 0x0 (0)
		float m_alpha; // 0x10 (16)
		String m_propertyName; // 0x18 (24)
	}; // 0x20 (32)
}

