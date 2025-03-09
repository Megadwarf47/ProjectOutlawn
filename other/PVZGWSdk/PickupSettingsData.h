///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Vec3.h>

namespace fb {
	struct PickupSettingsData {
		PickupSettingsData() {
			m_meshRenderRotation = Vec3(0.f, 0.f, 90.f);
		};

		Vec3 m_meshRenderOffset; // 0x0 (0)
		Vec3 m_meshRenderRotation; // 0x10 (16)
	}; // 0x20 (32)
}

