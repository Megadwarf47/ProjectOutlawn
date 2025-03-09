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
	struct GunSwayBaseMoveData {
		GunSwayBaseMoveData() {
		};

		GunSwayDispersionData m_baseValue; // 0x0 (0)
		GunSwayDispersionData m_moving; // 0x10 (16)
		GunSwayRecoilData m_recoil; // 0x20 (32)
		GunSwayLagData m_gunSwayLag; // 0x38 (56)
	}; // 0x4C (76)
}

