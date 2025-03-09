///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct HordeAntLodBinding {
		HordeAntLodBinding() {
		};

		AntRef m_fullLocoEnabled; // 0x0 (0)
		AntRef m_simpleLocoEnabled; // 0x14 (20)
		AntRef m_reloadEnabled; // 0x28 (40)
		AntRef m_jumpEnabled; // 0x3C (60)
		AntRef m_hitReactionsEnabled; // 0x50 (80)
		AntRef m_weaponsEnabled; // 0x64 (100)
		AntRef m_decorEnabled; // 0x78 (120)
		AntRef m_leftRightAimSpeed; // 0x8C (140)
	}; // 0xA0 (160)
}

