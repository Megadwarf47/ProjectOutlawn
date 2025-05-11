///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/HealthScaleThreshold.h>
#include <fb/SoldierHealthComponentData.h>

namespace fb {
	class PVZSoldierHealthComponentInputRestrictionAsset;
}

namespace fb {
	class PVZSoldierHealthComponentData : public SoldierHealthComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierHealthComponentData"); }
		virtual ~PVZSoldierHealthComponentData() override {}
		PVZSoldierHealthComponentData() {
			m_maxHealHealth = -1.f;
			m_reviveMultiplier = 0.5f;
		};

		CtrRef<PVZSoldierHealthComponentInputRestrictionAsset> m_spawnRestrictedInput; // 0xA0 (160)
		float m_maxHealHealth; // 0xA8 (168)
		float m_reviveMultiplier; // 0xAC (172)
		Array<HealthScaleThreshold> m_healthScaleThresholds; // 0xB0 (176)
	}; // 0xC0 (192)
}

