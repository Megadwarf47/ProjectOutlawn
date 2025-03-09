///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponUpgradeUnlockAsset.h>

namespace fb {
	class HealthWeaponUpgradeUnlockAsset : public WeaponUpgradeUnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HealthWeaponUpgradeUnlockAsset"); }
		virtual ~HealthWeaponUpgradeUnlockAsset() override {}
		HealthWeaponUpgradeUnlockAsset() {
			m_value = 1.f;
		};

		float m_value; // 0x40 (64)
	}; // 0x48 (72)
}

