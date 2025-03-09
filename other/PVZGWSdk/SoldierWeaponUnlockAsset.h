///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/StoredWeaponData.h>
#include <fb/String.h>
#include <fb/UnlockToBlueprintBundle.h>
#include <fb/WeaponUnlockAsset.h>

namespace fb {
	class Blueprint;
	class SoldierWeaponCustomizationAsset;
	class UnlockAssetBase;
}

namespace fb {
	class SoldierWeaponUnlockAsset : public WeaponUnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponUnlockAsset"); }
		virtual ~SoldierWeaponUnlockAsset() override {}
		SoldierWeaponUnlockAsset() {
			m_weaponIdentifier = 0;
			m_category = 0;
		};

		String m_weaponBundleName; // 0x40 (64)
		String m_weapon1pBundleName; // 0x48 (72)
		CtrRef<Blueprint> m_nonStreamedBlueprint; // 0x50 (80)
		CtrRef<SoldierWeaponCustomizationAsset> m_customization; // 0x58 (88)
		CtrRef<UnlockAssetBase> m_extra; // 0x60 (96)
		u32 m_weaponIdentifier; // 0x68 (104)
		u32 m_category; // 0x6C (108)
		StoredWeaponData m_weaponData; // 0x70 (112)
		Array<UnlockToBlueprintBundle> m_unlockToBlueprintBundle; // 0x80 (128)
	}; // 0x88 (136)
}

