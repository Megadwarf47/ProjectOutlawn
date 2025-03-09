///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/DirectWeaponSwitchingMapData.h>
#include <fb/WeaponSwitchingEnum.h>
#include <fb/WeaponSwitchingMapData.h>

namespace fb {
	class SoldierWeaponSwitchingData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponSwitchingData"); }
		virtual ~SoldierWeaponSwitchingData() override {}
		SoldierWeaponSwitchingData() {
			m_toggleAction = -1584896676;
			m_toggleMaxHoldTime = 0.f;
		};

		Array<WeaponSwitchingMapData> m_switchMap; // 0x18 (24)
		Array<DirectWeaponSwitchingMapData> m_directSwitchMap; // 0x20 (32)
		Array<WeaponSwitchingEnum> m_autoDropSlots; // 0x28 (40)
		s32 m_toggleAction; // 0x30 (48)
		float m_toggleMaxHoldTime; // 0x34 (52)
	}; // 0x38 (56)
}

