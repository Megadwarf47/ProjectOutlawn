///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct CharacterMeleeBinding {
		CharacterMeleeBinding() {
		};

		AntRef m_triggerMelee; // 0x0 (0)
		AntRef m_isRecovering; // 0x14 (20)
		AntRef m_isAttacker; // 0x28 (40)
		AntRef m_isDefender; // 0x3C (60)
		AntRef m_isAttackerInSpecialMode; // 0x50 (80)
		AntRef m_defendMelee; // 0x64 (100)
		AntRef m_meleeKill; // 0x78 (120)
		AntRef m_selfActor; // 0x8C (140)
		AntRef m_otherActor; // 0xA0 (160)
		AntRef m_meleeActive; // 0xB4 (180)
	}; // 0xC8 (200)
}

