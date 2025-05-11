///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct SimpleMeleeComponentBinding {
		SimpleMeleeComponentBinding() {
		};

		AntRef m_triggerMelee; // 0x0 (0)
		AntRef m_isRecovering; // 0x14 (20)
		AntRef m_isAttackerInSpecialMode; // 0x28 (40)
		AntRef m_isDefenderImmobilized; // 0x3C (60)
		AntRef m_isImmobilizedSpikeweed; // 0x50 (80)
		AntRef m_isAttacker; // 0x64 (100)
		AntRef m_isDefender; // 0x78 (120)
		AntRef m_isMeleeActive; // 0x8C (140)
		AntRef m_distanceNormalized; // 0xA0 (160)
		AntRef m_defenderHeightOffset; // 0xB4 (180)
		AntRef m_meleeAngle; // 0xC8 (200)
		AntRef m_inTemptingRange; // 0xDC (220)
		AntRef m_normalizedTemptingDistance; // 0xF0 (240)
		AntRef m_tongueBonePos0; // 0x104 (260)
		AntRef m_tongueBonePos1; // 0x118 (280)
		AntRef m_tongueBonePos2; // 0x12C (300)
		AntRef m_tongueBonePos3; // 0x140 (320)
		AntRef m_isStriking; // 0x154 (340)
		AntRef m_hideDefender; // 0x168 (360)
		AntRef m_isDefenderImmune; // 0x17C (380)
		AntRef m_isDefenderEscaping; // 0x190 (400)
	}; // 0x1A4 (420)
}

