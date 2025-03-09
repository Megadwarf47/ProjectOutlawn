///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoForceWeaponRecovery : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoForceWeaponRecovery"); }
		virtual ~BT_DoForceWeaponRecovery() override {}
		BT_DoForceWeaponRecovery() {
			m_forcedWeaponSlot = -1;
			m_startRecovery = true;
		};

		s32 m_forcedWeaponSlot; // 0x18 (24)
		bool m_startRecovery; // 0x1C (28)
	}; // 0x20 (32)
}

