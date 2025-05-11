///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct AIProximityReactionsBinding {
		AIProximityReactionsBinding() {
		};

		AntRef m_aiReaction; // 0x0 (0)
		AntRef m_aiExplosionReaction; // 0x14 (20)
		AntRef m_aiExplosionForce; // 0x28 (40)
		AntRef m_aiStunReaction; // 0x3C (60)
		AntRef m_aiStunReactionRandomFactor; // 0x50 (80)
		AntRef m_aiReactionDirection; // 0x64 (100)
		AntRef m_isPanicking; // 0x78 (120)
		AntRef m_fireNearby; // 0x8C (140)
		AntRef m_aimUpAndDown; // 0xA0 (160)
		AntRef m_focusAimScale; // 0xB4 (180)
		AntRef m_focusAiming; // 0xC8 (200)
		AntRef m_enableProceduralHeadAim; // 0xDC (220)
		AntRef m_killFromAnimation; // 0xF0 (240)
		AntRef m_playerAnimationKill; // 0x104 (260)
		AntRef m_playerInitiatedRagdoll; // 0x118 (280)
		AntRef m_aiSuppressed; // 0x12C (300)
		AntRef m_humanAwareness; // 0x140 (320)
		AntRef m_humanIsClose; // 0x154 (340)
		AntRef m_humanTargetYaw; // 0x168 (360)
		AntRef m_lookAtHuman; // 0x17C (380)
		AntRef m_retriggerIdle; // 0x190 (400)
		AntRef m_hasWantedPrecision; // 0x1A4 (420)
		AntRef m_targetVisible; // 0x1B8 (440)
		AntRef m_targetSpotted; // 0x1CC (460)
		AntRef m_targetDistance; // 0x1E0 (480)
		AntRef m_cruiseSpeedLevel; // 0x1F4 (500)
		AntRef m_drasticAimYawChange; // 0x208 (520)
	}; // 0x21C (540)
}

