///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponData.h>

namespace fb {
	class HumanCannonWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HumanCannonWeaponData"); }
		virtual ~HumanCannonWeaponData() override {}
		HumanCannonWeaponData() {
			m_forwardForce = 20.f;
			m_upwardForce = 20.f;
			m_autoTriggerTime = 3.f;
		};

		float m_forwardForce; // 0x20 (32)
		float m_upwardForce; // 0x24 (36)
		float m_autoTriggerTime; // 0x28 (40)
	}; // 0x30 (48)
}

