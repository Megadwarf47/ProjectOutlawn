///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/CustomizeCharacterData.h>
#include <fb/UnlockWeaponAndSlot.h>
#include <fb/WeaponSlot.h>

namespace fb {
	class PickupEntityAsset;
}

namespace fb {
	class CustomizeSoldierData : public CustomizeCharacterData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomizeSoldierData"); }
		virtual ~CustomizeSoldierData() override {}
		CustomizeSoldierData() {
			m_activeSlot = WeaponSlot::WeaponSlot_NotDefined;
			m_keepCurrentActiveSlot = false;
			m_removeAllExistingWeapons = false;
			m_disableDeathPickup = false;
		};

		Array<UnlockWeaponAndSlot> m_weapons; // 0x38 (56)
		WeaponSlot m_activeSlot; // 0x40 (64)
		CtrRef<PickupEntityAsset> m_deathPickup; // 0x48 (72)
		bool m_keepCurrentActiveSlot; // 0x50 (80)
		bool m_removeAllExistingWeapons; // 0x51 (81)
		bool m_disableDeathPickup; // 0x52 (82)
	}; // 0x58 (88)
}

