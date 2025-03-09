///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Types.h>
#include <fb/WeaponSwitchingEnum.h>

namespace fb {
	struct WeaponSwitchingMapData {
		WeaponSwitchingMapData() {
			m_fromWeapon = WeaponSwitchingEnum::wsNotUsed;
			m_action = -1341426433;
			m_maxHoldTime = 0.f;
			m_fireAndSwitchBackToPrev = false;
		};

		WeaponSwitchingEnum m_fromWeapon; // 0x0 (0)
		s32 m_action; // 0x4 (4)
		float m_maxHoldTime; // 0x8 (8)
		Array<WeaponSwitchingEnum> m_toWeapon; // 0x10 (16)
		bool m_fireAndSwitchBackToPrev; // 0x18 (24)
	}; // 0x20 (32)
}

