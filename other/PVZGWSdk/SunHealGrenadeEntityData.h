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
	class ProjectileBlueprint;
	class ProjectileEntityData;
}

namespace fb {
	class SunHealGrenadeEntityData : public PVZGrenadeEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SunHealGrenadeEntityData"); }
		virtual ~SunHealGrenadeEntityData() override {}
		SunHealGrenadeEntityData() {
			m_healAmount = 25.f;
			m_healRange = 25.f;
			m_numSunDrops = 5;
			m_initialSunDropSpeed = 5.f;
		};

		float m_healAmount; // 0x170 (368)
		float m_healRange; // 0x174 (372)
		s32 m_numSunDrops; // 0x178 (376)
		float m_initialSunDropSpeed; // 0x17C (380)
		CtrRef<ProjectileBlueprint> m_sunDropProjectile; // 0x180 (384)
		CtrRef<ProjectileEntityData> m_projectileData; // 0x188 (392)
	}; // 0x190 (400)
}

