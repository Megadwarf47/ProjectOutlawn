///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct CannedAnimationBinding {
		CannedAnimationBinding() {
		};

		AntRef m_levelIndex; // 0x0 (0)
		AntRef m_scenarioIndex; // 0x14 (20)
		AntRef m_actorIndex; // 0x28 (40)
		AntRef m_partIndex; // 0x3C (60)
		AntRef m_triggerCannedAnimation; // 0x50 (80)
		AntRef m_exitCannedAnimation; // 0x64 (100)
		AntRef m_externalTime; // 0x78 (120)
		AntRef m_blendValue; // 0x8C (140)
		AntRef m_advanceScenario; // 0xA0 (160)
		AntRef m_enteredLoop; // 0xB4 (180)
		AntRef m_almostFinished; // 0xC8 (200)
	}; // 0xDC (220)
}

