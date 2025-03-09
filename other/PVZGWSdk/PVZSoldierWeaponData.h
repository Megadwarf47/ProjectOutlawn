///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SoldierWeaponData.h>
#include <fb/Vec3.h>

namespace fb {
	class PVZSoldierWeaponData : public SoldierWeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierWeaponData"); }
		virtual ~PVZSoldierWeaponData() override {}
		PVZSoldierWeaponData() {
			m_cameraOffsetTransitionTime = 0.f;
			m_isManualSelectionAllowed = true;
			m_groundWeapon = false;
			m_rootedWeapon = false;
			m_burrowedWeapon = false;
			m_healerWeapon = false;
		};

		Vec3 m_cameraOffset; // 0x220 (544)
		float m_cameraOffsetTransitionTime; // 0x230 (560)
		bool m_isManualSelectionAllowed; // 0x234 (564)
		bool m_groundWeapon; // 0x235 (565)
		bool m_rootedWeapon; // 0x236 (566)
		bool m_burrowedWeapon; // 0x237 (567)
		bool m_healerWeapon; // 0x238 (568)
	}; // 0x240 (576)
}

