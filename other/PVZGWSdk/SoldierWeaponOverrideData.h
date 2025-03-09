///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class WeaponOverrideData;
}

namespace fb {
	class SoldierWeaponOverrideData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponOverrideData"); }
		virtual ~SoldierWeaponOverrideData() override {}
		SoldierWeaponOverrideData() {
		};

		RefArray<WeaponOverrideData> m_overrides; // 0x10 (16)
	}; // 0x18 (24)
}

