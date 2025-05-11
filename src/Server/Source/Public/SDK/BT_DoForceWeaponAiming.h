///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoForceWeaponAiming : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoForceWeaponAiming"); }
		virtual ~BT_DoForceWeaponAiming() override {}
		BT_DoForceWeaponAiming() {
			m_enabled = true;
		};

		bool m_enabled; // 0x18 (24)
	}; // 0x20 (32)
}

