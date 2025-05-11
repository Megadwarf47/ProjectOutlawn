///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Vec3.h>

namespace fb {
	struct CustomizationAccessoryPivots {
		CustomizationAccessoryPivots() {
			m_opticPivotPos = Vec3(0.f, 0.075f, 0.4f);
			m_barrelPivotPos = Vec3(0.f, 0.f, 0.7f);
			m_accessoryPivotPos = Vec3(0.f, 0.f, 0.6f);
			m_underBarrelPivotPos = Vec3(0.f, -0.05f, 0.5f);
		};

		Vec3 m_basePivotPos; // 0x0 (0)
		Vec3 m_opticPivotPos; // 0x10 (16)
		Vec3 m_barrelPivotPos; // 0x20 (32)
		Vec3 m_accessoryPivotPos; // 0x30 (48)
		Vec3 m_underBarrelPivotPos; // 0x40 (64)
	}; // 0x50 (80)
}

