///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GunSwayDispersionData.h>
#include <fb/GunSwayLagData.h>
#include <fb/GunSwayRecoilData.h>

namespace fb {
	struct GunSwayBaseMoveJumpData {
		GunSwayBaseMoveJumpData() {
		};

		GunSwayDispersionData m_baseValue; // 0x0 (0)
		GunSwayDispersionData m_moving; // 0x10 (16)
		GunSwayDispersionData m_jumping; // 0x20 (32)
		GunSwayDispersionData m_sprinting; // 0x30 (48)
		GunSwayDispersionData m_vaultingSmallObject; // 0x40 (64)
		GunSwayDispersionData m_vaultingMediumObject; // 0x50 (80)
		GunSwayRecoilData m_recoil; // 0x60 (96)
		GunSwayLagData m_gunSwayLag; // 0x78 (120)
	}; // 0x8C (140)
}

