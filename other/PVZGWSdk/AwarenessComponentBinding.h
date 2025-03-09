///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct AwarenessComponentBinding {
		AwarenessComponentBinding() {
		};

		AntRef m_relativeLookAtPitch; // 0x0 (0)
		AntRef m_relativeLookAtYaw; // 0x14 (20)
		AntRef m_hasAwarenessTarget; // 0x28 (40)
		AntRef m_explosionNearby; // 0x3C (60)
		AntRef m_explosionDirection; // 0x50 (80)
		AntRef m_nearbyThreat; // 0x64 (100)
		AntRef m_nearbyThreatDirection; // 0x78 (120)
		AntRef m_ambientThreat; // 0x8C (140)
	}; // 0xA0 (160)
}

