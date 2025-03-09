///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>

namespace fb {
	class BT_IsWeaponAvailable : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsWeaponAvailable"); }
		virtual ~BT_IsWeaponAvailable() override {}
		BT_IsWeaponAvailable() {
			m_weaponSlot = 0;
			m_readyCheck = true;
			m_pressureCheck = false;
		};

		s32 m_weaponSlot; // 0x20 (32)
		bool m_readyCheck; // 0x24 (36)
		bool m_pressureCheck; // 0x25 (37)
	}; // 0x28 (40)
}

