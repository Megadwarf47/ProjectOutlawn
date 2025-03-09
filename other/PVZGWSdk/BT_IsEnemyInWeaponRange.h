///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>

namespace fb {
	class BT_IsEnemyInWeaponRange : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsEnemyInWeaponRange"); }
		virtual ~BT_IsEnemyInWeaponRange() override {}
		BT_IsEnemyInWeaponRange() {
			m_weaponSlot = 0;
		};

		s32 m_weaponSlot; // 0x20 (32)
	}; // 0x28 (40)
}

