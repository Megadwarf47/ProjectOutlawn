///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/VisualUnlockAsset.h>

namespace fb {
	class WeaponVisualUpgradeUnlockAsset : public VisualUnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponVisualUpgradeUnlockAsset"); }
		virtual ~WeaponVisualUpgradeUnlockAsset() override {}
		WeaponVisualUpgradeUnlockAsset() {
		};

		Array<s32> m_upgradeSlots; // 0x90 (144)
	}; // 0x98 (152)
}

