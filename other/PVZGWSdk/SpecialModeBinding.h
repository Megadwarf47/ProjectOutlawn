///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct SpecialModeBinding {
		SpecialModeBinding() {
		};

		AntRef m_specialModeEnterTime; // 0x0 (0)
		AntRef m_specialModeExitTime; // 0x14 (20)
		AntRef m_activeSpecialMode; // 0x28 (40)
		AntRef m_specialModeIsEntering; // 0x3C (60)
		AntRef m_specialModeIsReady; // 0x50 (80)
	}; // 0x64 (100)
}

