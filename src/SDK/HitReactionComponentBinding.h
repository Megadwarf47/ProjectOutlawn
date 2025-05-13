///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct HitReactionComponentBinding {
		HitReactionComponentBinding() {
		};

		AntRef m_hit; // 0x0 (0)
		AntRef m_hitReactionWeight; // 0x14 (20)
		AntRef m_hitByAIPlayer; // 0x28 (40)
		AntRef m_allowKillFromAnimation; // 0x3C (60)
		AntRef m_direction; // 0x50 (80)
		AntRef m_firingDistance; // 0x64 (100)
		AntRef m_boneType; // 0x78 (120)
		AntRef m_impactType; // 0x8C (140)
		AntRef m_immortal; // 0xA0 (160)
		AntRef m_randomAnimationIndex; // 0xB4 (180)
	}; // 0xC8 (200)
}

