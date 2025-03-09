///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct ClimbLadderBinding {
		ClimbLadderBinding() {
		};

		AntRef m_climbLadderPhase; // 0x0 (0)
		AntRef m_climbLadderConnectPhase; // 0x14 (20)
		AntRef m_climbLadderTransitionPhase; // 0x28 (40)
		AntRef m_onLadder; // 0x3C (60)
		AntRef m_ladderTopTransition; // 0x50 (80)
		AntRef m_fallHigh; // 0x64 (100)
	}; // 0x78 (120)
}

