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
	struct GunSwayBaseData {
		GunSwayBaseData() {
		};

		GunSwayDispersionData m_baseValue; // 0x0 (0)
		GunSwayRecoilData m_recoil; // 0x10 (16)
		GunSwayLagData m_gunSwayLag; // 0x28 (40)
	}; // 0x3C (60)
}

