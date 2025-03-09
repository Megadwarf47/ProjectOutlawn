///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SupplyUnitSphereData.h>
#include <fb/WeaponClassEnum.h>

namespace fb {
	class AmmoSupplyUnitSphereData : public SupplyUnitSphereData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AmmoSupplyUnitSphereData"); }
		virtual ~AmmoSupplyUnitSphereData() override {}
		AmmoSupplyUnitSphereData() {
		};

		Array<WeaponClassEnum> m_ignoredWeaponClasses; // 0x30 (48)
	}; // 0x38 (56)
}

