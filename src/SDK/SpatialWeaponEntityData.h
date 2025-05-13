///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class WeaponData;
	class WeaponFiringData;
	class WeaponUnlockAsset;
}

namespace fb {
	class SpatialWeaponEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpatialWeaponEntityData"); }
		virtual ~SpatialWeaponEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		SpatialWeaponEntityData() {
		};

		CtrRef<WeaponUnlockAsset> m_weaponUnlockAsset; // 0x60 (96)
		CtrRef<WeaponFiringData> m_weaponFiring; // 0x68 (104)
		CtrRef<WeaponData> m_customWeaponType; // 0x70 (112)
	}; // 0x80 (128)
}

