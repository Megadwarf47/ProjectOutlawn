///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponClassEnum.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponClassModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponClassModifier"); }
		virtual ~WeaponClassModifier() override {}
		WeaponClassModifier() {
			m_weaponClass = WeaponClassEnum::wc12gauge;
		};

		WeaponClassEnum m_weaponClass; // 0x18 (24)
	}; // 0x20 (32)
}

