///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct CharacterMeleeCommonBinding {
		CharacterMeleeCommonBinding() {
		};

		AntRef m_meleeDistance; // 0x0 (0)
		AntRef m_meleeAngle; // 0x14 (20)
		AntRef m_meleeDirection; // 0x28 (40)
		AntRef m_defendEnabled; // 0x3C (60)
		AntRef m_meleeDefenceTime; // 0x50 (80)
		AntRef m_meleeSequenceTime; // 0x64 (100)
		AntRef m_meleeAborted; // 0x78 (120)
		AntRef m_isTimeToKill; // 0x8C (140)
		AntRef m_closeToTarget; // 0xA0 (160)
		AntRef m_meleeType; // 0xB4 (180)
		AntRef m_inTemptingRange; // 0xC8 (200)
		AntRef m_normalizedTemptingDistance; // 0xDC (220)
	}; // 0xF0 (240)
}

