///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIDirectiveData.h>

namespace fb {
	class AIDirectiveFireWeaponData : public AIDirectiveData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIDirectiveFireWeaponData"); }
		virtual ~AIDirectiveFireWeaponData() override {}
		AIDirectiveFireWeaponData() {
			m_weaponSlot = 0;
			m_continuousShooting = false;
		};

		s32 m_weaponSlot; // 0x20 (32)
		bool m_continuousShooting; // 0x24 (36)
	}; // 0x28 (40)
}

