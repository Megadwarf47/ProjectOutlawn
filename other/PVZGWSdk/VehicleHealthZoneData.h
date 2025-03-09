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
	class Curve2D;
}

namespace fb {
	struct VehicleHealthZoneData {
		VehicleHealthZoneData() {
			m_maxHealth = 0.f;
			m_maxShieldHealth = 0.f;
			m_minDamageAngle = 0.f;
			m_damageAngleMultiplier = 1.f;
			m_verticalFactor = 1.f;
			m_useDamageAngleCalculation = false;
		};

		float m_maxHealth; // 0x0 (0)
		float m_maxShieldHealth; // 0x4 (4)
		float m_minDamageAngle; // 0x8 (8)
		float m_damageAngleMultiplier; // 0xC (12)
		CtrRef<Curve2D> m_damageAngleMultiplierCurve; // 0x10 (16)
		float m_verticalFactor; // 0x18 (24)
		bool m_useDamageAngleCalculation; // 0x1C (28)
	}; // 0x20 (32)
}

