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
	struct WaterAmbientFoamEffectSpawner {
		WaterAmbientFoamEffectSpawner() {
			m_threshold = 0.2f;
			m_randomness = 0.5f;
			m_coolDownTime = 0.1f;
			m_nearDistance = 0.f;
			m_farDistance = 16.f;
			m_verticalVelocityScale = 1.f;
			m_horizontalVelocityScale = 2.f;
		};

		CtrRef<EffectBlueprint> m_effect; // 0x0 (0)
		float m_threshold; // 0x8 (8)
		float m_randomness; // 0xC (12)
		float m_coolDownTime; // 0x10 (16)
		float m_nearDistance; // 0x14 (20)
		float m_farDistance; // 0x18 (24)
		float m_verticalVelocityScale; // 0x1C (28)
		float m_horizontalVelocityScale; // 0x20 (32)
	}; // 0x28 (40)
}

