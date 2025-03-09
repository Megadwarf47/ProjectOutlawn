///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/WeaponOverrideValueType.h>

namespace fb {
	struct WeaponOverrideValue {
		WeaponOverrideValue() {
			m_valueType = WeaponOverrideValueType::OverrideValue_BulletEntity_DistributeDamageOverTime;
			m_value = 0.f;
		};

		WeaponOverrideValueType m_valueType; // 0x0 (0)
		float m_value; // 0x4 (4)
	}; // 0x8 (8)
}

