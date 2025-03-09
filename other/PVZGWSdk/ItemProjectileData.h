///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class ProjectileBlueprint;
	class ProjectileEntityData;
}

namespace fb {
	struct ItemProjectileData {
		ItemProjectileData() {
			m_interactionInput = -1341426433;
		};

		CtrRef<ProjectileBlueprint> m_projectile; // 0x0 (0)
		CtrRef<ProjectileEntityData> m_projectileData; // 0x8 (8)
		s32 m_interactionInput; // 0x10 (16)
		String m_displayText; // 0x18 (24)
	}; // 0x20 (32)
}

