///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class SupplyUnitSphereData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SupplyUnitSphereData"); }
		virtual ~SupplyUnitSphereData() override {}
		SupplyUnitSphereData() {
			m_radius = 4.f;
			m_maxRadius = 4.f;
			m_radiusChangeTime = 0.f;
			m_supplyIncSpeed = 0.f;
			m_instantRefill = 0.f;
			m_supplyPointsRefillSpeed = 0.f;
			m_supplyPointsCapacity = 0.f;
			m_forceUseInstantRefill = false;
			m_infiniteCapacity = true;
		};

		float m_radius; // 0x10 (16)
		float m_maxRadius; // 0x14 (20)
		float m_radiusChangeTime; // 0x18 (24)
		float m_supplyIncSpeed; // 0x1C (28)
		float m_instantRefill; // 0x20 (32)
		float m_supplyPointsRefillSpeed; // 0x24 (36)
		float m_supplyPointsCapacity; // 0x28 (40)
		bool m_forceUseInstantRefill; // 0x2C (44)
		bool m_infiniteCapacity; // 0x2D (45)
	}; // 0x30 (48)
}

