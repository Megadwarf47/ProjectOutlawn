///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterLookAtTriggerEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class SoldierWeaponUnlockAsset;
}

namespace fb {
	class LookAtTriggerEntityData : public CharacterLookAtTriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LookAtTriggerEntityData"); }
		virtual ~LookAtTriggerEntityData() override {}
		LookAtTriggerEntityData() {
			m_zoomLevel = 0;
		};

		CtrRef<SoldierWeaponUnlockAsset> m_soldierWeapon; // 0x80 (128)
		u32 m_zoomLevel; // 0x88 (136)
	}; // 0x90 (144)
}

