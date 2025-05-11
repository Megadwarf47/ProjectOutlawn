///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DynamicWeaponPickupSlotData.h>
#include <fb/PickupEntityData.h>

namespace fb {
	class DynamicWeaponPickupEntityData : public PickupEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicWeaponPickupEntityData"); }
		virtual ~DynamicWeaponPickupEntityData() override {}
		DynamicWeaponPickupEntityData() {
		};

		Array<DynamicWeaponPickupSlotData> m_weaponSlots; // 0xF0 (240)
	}; // 0x100 (256)
}

