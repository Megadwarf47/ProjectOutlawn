///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PickupEntityData.h>
#include <fb/WeaponUnlockPickupData.h>

namespace fb {
	class WeaponUnlockPickupEntityData : public PickupEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponUnlockPickupEntityData"); }
		virtual ~WeaponUnlockPickupEntityData() override {}
		WeaponUnlockPickupEntityData() {
			m_useForPersistence = true;
		};

		Array<WeaponUnlockPickupData> m_weapons; // 0xF0 (240)
		bool m_useForPersistence; // 0xF8 (248)
	}; // 0x100 (256)
}

