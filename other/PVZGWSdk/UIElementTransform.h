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
	struct UIElementTransform {
		UIElementTransform() {
			m_rotationPivot = Vec3(0.5f, 0.5f, 0.f);
			m_z = 0.f;
		};

		Vec3 m_rotation; // 0x0 (0)
		Vec3 m_rotationPivot; // 0x10 (16)
		float m_z; // 0x20 (32)
		String m_propertyName; // 0x28 (40)
	}; // 0x30 (48)
}

