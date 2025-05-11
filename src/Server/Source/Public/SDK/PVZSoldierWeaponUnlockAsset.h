///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SoldierWeaponUnlockAsset.h>

namespace fb {
	class WeaponUpgradeTable;
}

namespace fb {
	class PVZSoldierWeaponUnlockAsset : public SoldierWeaponUnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierWeaponUnlockAsset"); }
		virtual ~PVZSoldierWeaponUnlockAsset() override {}
		PVZSoldierWeaponUnlockAsset() {
		};

		CtrRef<WeaponUpgradeTable> m_weaponUpgrades; // 0x88 (136)
	}; // 0x90 (144)
}

