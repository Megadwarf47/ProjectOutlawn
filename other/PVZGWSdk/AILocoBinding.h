///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct AILocoBinding {
		AILocoBinding() {
		};

		AntRef m_locoTarget; // 0x0 (0)
		AntRef m_attentionState; // 0x14 (20)
		AntRef m_endPoseEnum; // 0x28 (40)
		AntRef m_currentPoseEnum; // 0x3C (60)
		AntRef m_enterExitPoseEnum; // 0x50 (80)
		AntRef m_runStyle; // 0x64 (100)
		AntRef m_targetWaypointPosition; // 0x78 (120)
		AntRef m_targetWaypointRadius; // 0x8C (140)
		AntRef m_targetSpeedLevel; // 0xA0 (160)
		AntRef m_cruiseSpeedLevel; // 0xB4 (180)
		AntRef m_enableProceduralHeadAim; // 0xC8 (200)
	}; // 0xDC (220)
}

