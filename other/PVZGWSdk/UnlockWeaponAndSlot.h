///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/WeaponSlot.h>

namespace fb {
	class SoldierWeaponUnlockAsset;
	class UnlockAssetBase;
}

namespace fb {
	struct UnlockWeaponAndSlot {
		UnlockWeaponAndSlot() {
			m_slot = WeaponSlot::WeaponSlot_NotDefined;
		};

		CtrRef<SoldierWeaponUnlockAsset> m_weapon; // 0x0 (0)
		WeaponSlot m_slot; // 0x8 (8)
		RefArray<UnlockAssetBase> m_customizationUnlockAssets; // 0x10 (16)
		RefArray<UnlockAssetBase> m_unlockAssets; // 0x18 (24)
	}; // 0x20 (32)
}

