///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/WeaponSwitchingEnum.h>

namespace fb {
	struct DirectWeaponSwitchingMapData {
		DirectWeaponSwitchingMapData() {
			m_action = -1341426433;
			m_maxHoldTime = 0.f;
			m_toWeapon = WeaponSwitchingEnum::wsNotUsed;
			m_switchBackToPrevMaxTimePressed = 0.f;
			m_preventMeleeRepeatTime = 1.f;
			m_fireAndSwitchBackToPrev = false;
			m_useQuickSwitch = false;
		};

		s32 m_action; // 0x0 (0)
		float m_maxHoldTime; // 0x4 (4)
		WeaponSwitchingEnum m_toWeapon; // 0x8 (8)
		float m_switchBackToPrevMaxTimePressed; // 0xC (12)
		float m_preventMeleeRepeatTime; // 0x10 (16)
		bool m_fireAndSwitchBackToPrev; // 0x14 (20)
		bool m_useQuickSwitch; // 0x15 (21)
	}; // 0x18 (24)
}

