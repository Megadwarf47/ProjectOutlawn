///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct WeaponAnimationSettingsData {
		WeaponAnimationSettingsData() {
			m_kickbackFactor = 1.f;
			m_kickbackSpeedFactor = 1.f;
			m_weaponOffsetX = 0.f;
			m_weaponOffsetY = 0.f;
			m_weaponOffsetZ = 0.f;
			m_zoomOutSpeed = 1.f;
			m_zoomInSpeed = 1.f;
		};

		float m_kickbackFactor; // 0x0 (0)
		float m_kickbackSpeedFactor; // 0x4 (4)
		float m_weaponOffsetX; // 0x8 (8)
		float m_weaponOffsetY; // 0xC (12)
		float m_weaponOffsetZ; // 0x10 (16)
		float m_zoomOutSpeed; // 0x14 (20)
		float m_zoomInSpeed; // 0x18 (24)
	}; // 0x1C (28)
}

