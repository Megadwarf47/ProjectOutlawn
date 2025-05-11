///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/WeaponModifierBase.h>
#include <fb/WeaponZeroingEntry.h>

namespace fb {
	class WeaponZeroingModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponZeroingModifier"); }
		virtual ~WeaponZeroingModifier() override {}
		WeaponZeroingModifier() {
		};

		Array<WeaponZeroingEntry> m_modes; // 0x18 (24)
	}; // 0x20 (32)
}

