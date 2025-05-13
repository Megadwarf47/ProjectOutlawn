///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct SoldierHealthModuleBinding {
		SoldierHealthModuleBinding() {
		};

		AntRef m_headShot; // 0x0 (0)
		AntRef m_leftArmHit; // 0x14 (20)
		AntRef m_rightArmHit; // 0x28 (40)
		AntRef m_leftLegHit; // 0x3C (60)
		AntRef m_rightLegHit; // 0x50 (80)
		AntRef m_onGround; // 0x64 (100)
		AntRef m_deathAnimationTriggered; // 0x78 (120)
		AntRef m_randomAnimationIndex; // 0x8C (140)
		AntRef m_sprinting; // 0xA0 (160)
		AntRef m_hitLeft; // 0xB4 (180)
		AntRef m_hitRight; // 0xC8 (200)
		AntRef m_hitFront; // 0xDC (220)
		AntRef m_hitBack; // 0xF0 (240)
		AntRef m_deathHitDirection; // 0x104 (260)
		AntRef m_explosion; // 0x118 (280)
		AntRef m_dead; // 0x12C (300)
		AntRef m_revived; // 0x140 (320)
		AntRef m_randomValue; // 0x154 (340)
		AntRef m_pose; // 0x168 (360)
		AntRef m_rightSpeed; // 0x17C (380)
		AntRef m_forwardSpeed; // 0x190 (400)
		AntRef m_criticallyHit; // 0x1A4 (420)
		AntRef m_interactiveManDown; // 0x1B8 (440)
		AntRef m_health; // 0x1CC (460)
	}; // 0x1E0 (480)
}

