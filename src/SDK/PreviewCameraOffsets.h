///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TeamId.h>
#include <fb/Vec3.h>

namespace fb {
	struct PreviewCameraOffsets {
		PreviewCameraOffsets() {
			m_characterSpawnScreenOffset = Vec3(0.f, -1.5f, -5.f);
			m_characterCustomizationScreenOffset = Vec3(3.f, -0.5f, -3.f);
			m_team = TeamId::TeamNeutral;
		};

		Vec3 m_characterSpawnScreenOffset; // 0x0 (0)
		Vec3 m_characterCustomizationScreenOffset; // 0x10 (16)
		TeamId m_team; // 0x20 (32)
	}; // 0x30 (48)
}

