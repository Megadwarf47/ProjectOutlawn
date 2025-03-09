///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct SpecialMovesBinding {
		SpecialMovesBinding() {
		};

		AntRef m_useNewVault; // 0x0 (0)
		AntRef m_triggerHighVault; // 0x14 (20)
		AntRef m_triggerUpVault; // 0x28 (40)
		AntRef m_triggerLowVault; // 0x3C (60)
		AntRef m_triggerSlideIntoProne; // 0x50 (80)
		AntRef m_triggerSpecialAnimation; // 0x64 (100)
		AntRef m_specialAnimationIndex; // 0x78 (120)
		AntRef m_objectHeight; // 0x8C (140)
		AntRef m_objectDistance; // 0xA0 (160)
		AntRef m_objectThickness; // 0xB4 (180)
		AntRef m_startObjectDistanceTimer; // 0xC8 (200)
		AntRef m_vaultObjectPositionX; // 0xDC (220)
		AntRef m_vaultObjectPositionZ; // 0xF0 (240)
		AntRef m_cancelAnimation; // 0x104 (260)
	}; // 0x118 (280)
}

