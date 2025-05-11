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
	class SoldierAimingSimulationData;
}

namespace fb {
	class WeaponAimingSimulationModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponAimingSimulationModifier"); }
		virtual ~WeaponAimingSimulationModifier() override {}
		WeaponAimingSimulationModifier() {
		};

		CtrRef<SoldierAimingSimulationData> m_aimingController; // 0x18 (24)
	}; // 0x20 (32)
}

