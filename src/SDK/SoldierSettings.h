///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SystemSettings.h>

namespace fb {
	class SoldierWeaponSwitchingData;
}

namespace fb {
	class SoldierSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierSettings"); }
		virtual ~SoldierSettings() override {}
		SoldierSettings() {
			m_maxNumberDroppedPickups = 24;
			m_maxVisiblePickupWeapons = 10;
		};

		CtrRef<SoldierWeaponSwitchingData> m_soldierWeaponSwitching; // 0x20 (32)
		u32 m_maxNumberDroppedPickups; // 0x28 (40)
		u32 m_maxVisiblePickupWeapons; // 0x2C (44)
	}; // 0x30 (48)
}

