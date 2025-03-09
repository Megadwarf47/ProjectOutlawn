///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class PVZSoldierWeaponUnlockAsset;
	class WeaponData;
	class WeaponFiringData;
}

namespace fb {
	class PVZFireWeaponActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZFireWeaponActionData"); }
		virtual ~PVZFireWeaponActionData() override {}
		PVZFireWeaponActionData() {

			m_actionType = PVZCommanderActionType::PVZCommanderActionType_AirStrike;
		};

		CtrRef<PVZSoldierWeaponUnlockAsset> m_weaponAsset; // 0x30 (48)
		CtrRef<WeaponFiringData> m_weaponFiring; // 0x38 (56)
		CtrRef<WeaponData> m_customWeaponType; // 0x40 (64)
	}; // 0x48 (72)
}

