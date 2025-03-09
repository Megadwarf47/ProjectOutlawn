///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlueprintBundle.h>
#include <fb/RefArray.h>

namespace fb {
	class AntStateAsset;
}

namespace fb {
	class SoldierWeaponBlueprintBundle : public BlueprintBundle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponBlueprintBundle"); }
		virtual ~SoldierWeaponBlueprintBundle() override {}
		SoldierWeaponBlueprintBundle() {
		};

		RefArray<AntStateAsset> m_antStateAssets; // 0x28 (40)
	}; // 0x30 (48)
}

