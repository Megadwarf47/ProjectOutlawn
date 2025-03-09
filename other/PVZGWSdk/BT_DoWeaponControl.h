///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/ETargetWeaponType.h>
#include <fb/EWeaponAiming.h>

namespace fb {
	class BT_DoWeaponControl : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoWeaponControl"); }
		virtual ~BT_DoWeaponControl() override {}
		BT_DoWeaponControl() {
			m_weaponSelection = ETargetWeaponType::ETargetWeapon_None;
			m_forcedWeaponSlot = -1;
			m_aiming = EWeaponAiming::EWeaponAiming_Auto;
			m_fireWeapon = false;
		};

		ETargetWeaponType m_weaponSelection; // 0x18 (24)
		s32 m_forcedWeaponSlot; // 0x1C (28)
		EWeaponAiming m_aiming; // 0x20 (32)
		bool m_fireWeapon; // 0x24 (36)
	}; // 0x28 (40)
}

