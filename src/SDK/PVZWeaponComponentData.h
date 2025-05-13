///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PvZWeaponsBinding.h>
#include <fb/WeaponComponentData.h>

namespace fb {
	class PVZWeaponComponentData : public WeaponComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZWeaponComponentData"); }
		virtual ~PVZWeaponComponentData() override {}
		PVZWeaponComponentData() {
			m_fireAndSwitchBackToPrevious = false;
		};

		PvZWeaponsBinding m_pvZWeaponsAnimationBinding; // 0xF0 (240)
		bool m_fireAndSwitchBackToPrevious; // 0x140 (320)
	}; // 0x150 (336)
}

