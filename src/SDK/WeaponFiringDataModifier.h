///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponFiringData;
}

namespace fb {
	class WeaponFiringDataModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponFiringDataModifier"); }
		virtual ~WeaponFiringDataModifier() override {}
		WeaponFiringDataModifier() {
		};

		CtrRef<WeaponFiringData> m_weaponFiring; // 0x18 (24)
	}; // 0x20 (32)
}

