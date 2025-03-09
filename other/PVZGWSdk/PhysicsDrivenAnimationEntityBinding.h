///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct PhysicsDrivenAnimationEntityBinding {
		PhysicsDrivenAnimationEntityBinding() {
		};

		AntRef m_physicsMotionTarget; // 0x0 (0)
		AntRef m_aimLeftRight; // 0x14 (20)
		AntRef m_aimUpDown; // 0x28 (40)
		AntRef m_crouch; // 0x3C (60)
		AntRef m_forceSetTrajectory; // 0x50 (80)
		AntRef m_inAir; // 0x64 (100)
		AntRef m_skydive; // 0x78 (120)
		AntRef m_parachute; // 0x8C (140)
		AntRef m_swim; // 0xA0 (160)
		AntRef m_flying; // 0xB4 (180)
		AntRef m_inputBackward; // 0xC8 (200)
		AntRef m_inputForward; // 0xDC (220)
		AntRef m_inputLeft; // 0xF0 (240)
		AntRef m_inputRight; // 0x104 (260)
		AntRef m_isEnemy; // 0x118 (280)
		AntRef m_jump; // 0x12C (300)
		AntRef m_leanLeftRight; // 0x140 (320)
		AntRef m_prone; // 0x154 (340)
		AntRef m_sprint; // 0x168 (360)
		AntRef m_groundSupported; // 0x17C (380)
		AntRef m_groundNormal; // 0x190 (400)
		AntRef m_groundDistance; // 0x1A4 (420)
		AntRef m_groundAngleZ; // 0x1B8 (440)
		AntRef m_groundAngleX; // 0x1CC (460)
		AntRef m_groundAngleFromNormal; // 0x1E0 (480)
		AntRef m_isClientAnimatable; // 0x1F4 (500)
		AntRef m_customizationScreen; // 0x208 (520)
		AntRef m_minimal3pServer; // 0x21C (540)
		AntRef m_verticalImpact; // 0x230 (560)
		AntRef m_verticalImpactSpeed; // 0x244 (580)
		AntRef m_falseSignal; // 0x258 (600)
		AntRef m_lockArmsToCameraWeight; // 0x26C (620)
		AntRef m_windDirection; // 0x280 (640)
		AntRef m_windStrength; // 0x294 (660)
		AntRef m_waterDepth; // 0x2A8 (680)
		AntRef m_eyeWaterDepth; // 0x2BC (700)
		AntRef m_velocityY; // 0x2D0 (720)
	}; // 0x2E4 (740)
}

