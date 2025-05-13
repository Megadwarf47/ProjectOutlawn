///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct UIShieldIconConfiguration {
		UIShieldIconConfiguration() {
			m_blinkRate = 0.175f;
		};

		float m_blinkRate; // 0x0 (0)
		String m_portableGadgetIcon; // 0x8 (8)
		String m_portableShieldIcon; // 0x10 (16)
		String m_vehicleShieldIcon; // 0x18 (24)
	}; // 0x20 (32)
}

