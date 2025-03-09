///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SupplyUnitSphereData.h>

namespace fb {
	class HealingSupplyUnitSphereData : public SupplyUnitSphereData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HealingSupplyUnitSphereData"); }
		virtual ~HealingSupplyUnitSphereData() override {}
		HealingSupplyUnitSphereData() {
			m_distributeHealingOverTime = 0.f;
		};

		float m_distributeHealingOverTime; // 0x30 (48)
	}; // 0x38 (56)
}

