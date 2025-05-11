///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct DynamicWeaponPickupSlotData {
		DynamicWeaponPickupSlotData() {
			m_weaponSlot = 0;
			m_altWeaponSlot = -1;
			m_linkedToWeaponSlot = -1;
		};

		u32 m_weaponSlot; // 0x0 (0)
		s32 m_altWeaponSlot; // 0x4 (4)
		s32 m_linkedToWeaponSlot; // 0x8 (8)
	}; // 0xC (12)
}

