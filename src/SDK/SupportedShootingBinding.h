///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct SupportedShootingBinding {
		SupportedShootingBinding() {
		};

		AntRef m_supported; // 0x0 (0)
		AntRef m_supportedPos; // 0x14 (20)
		AntRef m_forwardVector; // 0x28 (40)
		AntRef m_yaw; // 0x3C (60)
		AntRef m_pitch; // 0x50 (80)
		AntRef m_distToObject; // 0x64 (100)
		AntRef m_heightOfObject; // 0x78 (120)
		AntRef m_undeploying; // 0x8C (140)
		AntRef m_animatedCamera; // 0xA0 (160)
	}; // 0xB4 (180)
}

