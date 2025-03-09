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
	class CrosshairTypeAsset;
}

namespace fb {
	class WeaponCrosshairTypeModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponCrosshairTypeModifier"); }
		virtual ~WeaponCrosshairTypeModifier() override {}
		WeaponCrosshairTypeModifier() {
		};

		CtrRef<CrosshairTypeAsset> m_crosshairType; // 0x18 (24)
	}; // 0x20 (32)
}

