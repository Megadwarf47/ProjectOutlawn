///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimingWorldSpaceLockEfficiencyData.h>
#include <fb/CharacterEntryComponentData.h>
#include <fb/CtrRef.h>
#include <fb/Vec3.h>

namespace fb {
	class AntEnumeration;
}

namespace fb {
	class SoldierEntryComponentData : public CharacterEntryComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierEntryComponentData"); }
		virtual ~SoldierEntryComponentData() override {}
		SoldierEntryComponentData() {
			m_animationAccelerationMultiplier = Vec3(0.1f, 0.1f, 0.1f);
			m_leaveSoldierInPlace = false;
			m_clampSoldierOffsetToBoundingBox = false;
			m_clampSoldierYOffsetToFloor = false;
			m_hideVehicleHud = false;

			m_lockSoldierAimingToEntry = false;
			m_showSoldierWeaponInEntry = true;
		};

		Vec3 m_animationAccelerationMultiplier; // 0x100 (256)
		CtrRef<AntEnumeration> m_antEntryEnumeration; // 0x110 (272)
		AimingWorldSpaceLockEfficiencyData m_worldSpaceLockEfficiency; // 0x118 (280)
		bool m_leaveSoldierInPlace; // 0x128 (296)
		bool m_clampSoldierOffsetToBoundingBox; // 0x129 (297)
		bool m_clampSoldierYOffsetToFloor; // 0x12A (298)
		bool m_hideVehicleHud; // 0x12B (299)
	}; // 0x130 (304)
}

