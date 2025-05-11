///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/UnlockWeaponAndSlot.h>

namespace fb {
	struct WeaponUnlockPickupData {
		WeaponUnlockPickupData() {
			m_altWeaponSlot = -1;
			m_linkedToWeaponSlot = -1;
			m_minAmmo = 0;
			m_maxAmmo = 0;
			m_unlimitedAmmoPickup = false;
		};

		UnlockWeaponAndSlot m_unlockWeaponAndSlot; // 0x0 (0)
		s32 m_altWeaponSlot; // 0x20 (32)
		s32 m_linkedToWeaponSlot; // 0x24 (36)
		u32 m_minAmmo; // 0x28 (40)
		u32 m_maxAmmo; // 0x2C (44)
		bool m_unlimitedAmmoPickup; // 0x30 (48)
	}; // 0x38 (56)
}

