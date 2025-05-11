///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct AILocoCoverBinding {
		AILocoCoverBinding() {
		};

		AntRef m_prepareFire; // 0x0 (0)
		AntRef m_prepareChangedToTrue; // 0x14 (20)
		AntRef m_throwGrenade; // 0x28 (40)
		AntRef m_peekOut; // 0x3C (60)
		AntRef m_idleBehindCover; // 0x50 (80)
		AntRef m_peekType; // 0x64 (100)
		AntRef m_idleTypePrevious; // 0x78 (120)
		AntRef m_idleType; // 0x8C (140)
		AntRef m_idleTypeChanged; // 0xA0 (160)
		AntRef m_coverTypeEnum; // 0xB4 (180)
		AntRef m_coverFireStyle; // 0xC8 (200)
		AntRef m_enterCover; // 0xDC (220)
		AntRef m_exitCover; // 0xF0 (240)
		AntRef m_coverDistanceSmall; // 0x104 (260)
		AntRef m_coverDistanceMedium; // 0x118 (280)
		AntRef m_distanceScale; // 0x12C (300)
		AntRef m_absoluteDistance; // 0x140 (320)
		AntRef m_angleToNormal; // 0x154 (340)
		AntRef m_directionToCoverVsAITrajectory; // 0x168 (360)
		AntRef m_coverNormalVsAITrajectory; // 0x17C (380)
		AntRef m_outAngle; // 0x190 (400)
		AntRef m_exitCoverDistance; // 0x1A4 (420)
		AntRef m_threatAngle; // 0x1B8 (440)
		AntRef m_stopExitCoverOutAround; // 0x1CC (460)
		AntRef m_enterStrategy; // 0x1E0 (480)
		AntRef m_exitStyle; // 0x1F4 (500)
	}; // 0x208 (520)
}

