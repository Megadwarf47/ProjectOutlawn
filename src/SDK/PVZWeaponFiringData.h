///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponFiringData.h>

namespace fb {
	class PVZWeaponFiringData : public WeaponFiringData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZWeaponFiringData"); }
		virtual ~PVZWeaponFiringData() override {}
		PVZWeaponFiringData() {
		};

	}; // 0x58 (88)
}

