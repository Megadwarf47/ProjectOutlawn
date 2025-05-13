///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class AmmoSupplyUnitSphereData;
	class HealingSupplyUnitSphereData;
}

namespace fb {
	struct SupplyData {
		SupplyData() {
			m_exclusionTimeout = 0.f;
			m_supplySoldiers = true;
			m_supplyVehicles = false;
			m_teamSpecific = true;
			m_excludeSelf = true;
		};

		CtrRef<HealingSupplyUnitSphereData> m_healing; // 0x0 (0)
		CtrRef<AmmoSupplyUnitSphereData> m_ammo; // 0x8 (8)
		float m_exclusionTimeout; // 0x10 (16)
		bool m_supplySoldiers; // 0x14 (20)
		bool m_supplyVehicles; // 0x15 (21)
		bool m_teamSpecific; // 0x16 (22)
		bool m_excludeSelf; // 0x17 (23)
	}; // 0x18 (24)
}

