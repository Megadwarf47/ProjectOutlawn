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
	class WeaponData;
}

namespace fb {
	class CustomWeaponTypeModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomWeaponTypeModifier"); }
		virtual ~CustomWeaponTypeModifier() override {}
		CustomWeaponTypeModifier() {
		};

		CtrRef<WeaponData> m_customWeaponType; // 0x18 (24)
	}; // 0x20 (32)
}

