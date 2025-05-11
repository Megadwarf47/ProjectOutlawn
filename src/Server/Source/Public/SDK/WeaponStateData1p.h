///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/WeaponMesh1p.h>

namespace fb {
	class WeaponStateData1p : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponStateData1p"); }
		virtual ~WeaponStateData1p() override {}
		WeaponStateData1p() {
		};

		Array<WeaponMesh1p> m_weaponMesh1p; // 0x10 (16)
	}; // 0x18 (24)
}

