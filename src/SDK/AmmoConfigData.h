///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct AmmoConfigData {
		AmmoConfigData() {
			m_magazineCapacity = 30;
			m_numberOfMagazines = 6;
			m_traceFrequency = 1;
			m_ammoPickupMinAmount = 0;
			m_ammoPickupMaxAmount = 0;
			m_autoReplenishDelay = 5.f;
			m_ammoBagPickupDelayMultiplier = 1.f;
			m_ammoBagPickupAmount = -1;
			m_autoReplenishMagazine = false;
			m_replenishAtProjectileLimit = true;
			m_replenishOnDeactivate = false;
		};

		s32 m_magazineCapacity; // 0x0 (0)
		s32 m_numberOfMagazines; // 0x4 (4)
		u32 m_traceFrequency; // 0x8 (8)
		u32 m_ammoPickupMinAmount; // 0xC (12)
		u32 m_ammoPickupMaxAmount; // 0x10 (16)
		float m_autoReplenishDelay; // 0x14 (20)
		float m_ammoBagPickupDelayMultiplier; // 0x18 (24)
		s32 m_ammoBagPickupAmount; // 0x1C (28)
		bool m_autoReplenishMagazine; // 0x20 (32)
		bool m_replenishAtProjectileLimit; // 0x21 (33)
		bool m_replenishOnDeactivate; // 0x22 (34)
	}; // 0x24 (36)
}

