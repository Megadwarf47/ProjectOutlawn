///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponAnimType.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponAnimTypeModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponAnimTypeModifier"); }
		virtual ~WeaponAnimTypeModifier() override {}
		WeaponAnimTypeModifier() {
			m_weaponAnimType = WeaponAnimType::WeaponAnimType_NoAddon;
		};

		WeaponAnimType m_weaponAnimType; // 0x18 (24)
	}; // 0x20 (32)
}

