///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/KnockbackForce.h>
#include <fb/RadialDamageWeaponComponentData.h>

namespace fb {
	class RadialKnockbackWeaponComponentData : public RadialDamageWeaponComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadialKnockbackWeaponComponentData"); }
		virtual ~RadialKnockbackWeaponComponentData() override {}
		RadialKnockbackWeaponComponentData() {
		};

		KnockbackForce m_force; // 0x80 (128)
	}; // 0x90 (144)
}

