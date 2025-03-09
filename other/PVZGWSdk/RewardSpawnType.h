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
	class ProjectileBlueprint;
}

namespace fb {
	struct RewardSpawnType {
		RewardSpawnType() {
			m_spawnChance = 1.f;
		};

		CtrRef<ProjectileBlueprint> m_projectile; // 0x0 (0)
		float m_spawnChance; // 0x8 (8)
	}; // 0x10 (16)
}

