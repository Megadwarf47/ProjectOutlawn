///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GamePlatform.h>

namespace fb {
	class SoldierAimAssistData;
}

namespace fb {
	struct PlatformAimAssistData {
		PlatformAimAssistData() {
			m_platform = GamePlatform::GamePlatform_Ps3;
		};

		GamePlatform m_platform; // 0x0 (0)
		CtrRef<SoldierAimAssistData> m_aimAssistData; // 0x8 (8)
	}; // 0x10 (16)
}

