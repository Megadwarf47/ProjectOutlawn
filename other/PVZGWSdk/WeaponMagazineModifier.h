///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponMagazineModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponMagazineModifier"); }
		virtual ~WeaponMagazineModifier() override {}
		WeaponMagazineModifier() {
			m_magazineCapacity = 30;
			m_numberOfMagazines = 6;
		};

		s32 m_magazineCapacity; // 0x18 (24)
		s32 m_numberOfMagazines; // 0x1C (28)
	}; // 0x20 (32)
}

