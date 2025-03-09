///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponData.h>

namespace fb {
	class ZeroingWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ZeroingWeaponData"); }
		virtual ~ZeroingWeaponData() override {}
		ZeroingWeaponData() {
		};

	}; // 0x20 (32)
}

