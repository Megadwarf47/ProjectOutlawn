///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct StoredWeaponData {
		StoredWeaponData() {
			m_weaponClass = 0;
			m_magCount = 0;
			m_magCapacity = 0;
			m_switchToPrimaryWhenOutOfAmmo = false;
		};

		s32 m_weaponClass; // 0x0 (0)
		s32 m_magCount; // 0x4 (4)
		s32 m_magCapacity; // 0x8 (8)
		bool m_switchToPrimaryWhenOutOfAmmo; // 0xC (12)
	}; // 0x10 (16)
}

