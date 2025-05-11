///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/ETargetType.h>
#include <fb/ETargetWeaponType.h>

namespace fb {
	class BT_DoTarget : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoTarget"); }
		virtual ~BT_DoTarget() override {}
		BT_DoTarget() {
			m_targetType = ETargetType::ETarget_Null;
			m_equipBestWeapon = ETargetWeaponType::ETargetWeapon_Best;
		};

		ETargetType m_targetType; // 0x18 (24)
		ETargetWeaponType m_equipBestWeapon; // 0x1C (28)
	}; // 0x20 (32)
}

