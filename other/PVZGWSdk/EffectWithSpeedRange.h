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
	class EffectBlueprint;
}

namespace fb {
	struct EffectWithSpeedRange {
		EffectWithSpeedRange() {
			m_minSpeed = 0.f;
			m_maxSpeed = 10000.f;
		};

		CtrRef<EffectBlueprint> m_effect; // 0x0 (0)
		float m_minSpeed; // 0x8 (8)
		float m_maxSpeed; // 0xC (12)
	}; // 0x10 (16)
}

