///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class PVZVisualUnlockAsset;
	class WeaponUpgradeUnlockAsset;
	class WeaponVisualUpgradeUnlockAsset;
}

namespace fb {
	class WeaponUpgradeTable : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponUpgradeTable"); }
		virtual ~WeaponUpgradeTable() override {}
		WeaponUpgradeTable() {
		};

		RefArray<WeaponUpgradeUnlockAsset> m_upgrades; // 0x10 (16)
		RefArray<WeaponVisualUpgradeUnlockAsset> m_visualUpgrades; // 0x18 (24)
		RefArray<PVZVisualUnlockAsset> m_customizedSkins; // 0x20 (32)
	}; // 0x28 (40)
}

