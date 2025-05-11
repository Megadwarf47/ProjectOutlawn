///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	struct PVZShieldState {
		PVZShieldState() {
			m_healthThreshold = 0.f;
		};

		CtrRef<ObjectBlueprint> m_shield; // 0x0 (0)
		float m_healthThreshold; // 0x8 (8)
	}; // 0x10 (16)
}

