///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ShotConfigData.h>
#include <fb/Types.h>

namespace fb {
	struct ChargeShotConfigData {
		ChargeShotConfigData() {
			m_chargeTime = 0.f;
		};

		ShotConfigData m_shot; // 0x0 (0)
		float m_chargeTime; // 0x90 (144)
	}; // 0xA0 (160)
}

