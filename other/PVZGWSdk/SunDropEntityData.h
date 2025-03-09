///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PVZGrenadeEntityData.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class SunDropEntityData : public PVZGrenadeEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SunDropEntityData"); }
		virtual ~SunDropEntityData() override {}
		SunDropEntityData() {
			m_maxDistanceOfTarget = 5.f;
			m_distanceToDetonate = 2.5f;
			m_friendlyAcceleration = 10.f;
			m_healAmount = 25.f;
			m_damageAmount = 25.f;
			m_timeToArm = 2.f;
			m_pvzGravity = -9.8f;
			m_allowOwnerHealing = true;
			m_allowAIPickup = true;
		};

		float m_maxDistanceOfTarget; // 0x170 (368)
		float m_distanceToDetonate; // 0x174 (372)
		float m_friendlyAcceleration; // 0x178 (376)
		float m_healAmount; // 0x17C (380)
		float m_damageAmount; // 0x180 (384)
		float m_timeToArm; // 0x184 (388)
		float m_pvzGravity; // 0x188 (392)
		CtrRef<EffectBlueprint> m_sunEffect; // 0x190 (400)
		bool m_allowOwnerHealing; // 0x198 (408)
		bool m_allowAIPickup; // 0x199 (409)
	}; // 0x1A0 (416)
}

