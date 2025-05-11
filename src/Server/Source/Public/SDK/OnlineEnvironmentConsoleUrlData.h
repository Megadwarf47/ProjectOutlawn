///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GamePlatform.h>
#include <fb/OnlineEnvironmentUrl.h>

namespace fb {
	struct OnlineEnvironmentConsoleUrlData {
		OnlineEnvironmentConsoleUrlData() {
			m_platform = GamePlatform::GamePlatform_Ps3;
		};

		GamePlatform m_platform; // 0x0 (0)
		OnlineEnvironmentUrl m_url; // 0x8 (8)
	}; // 0x10 (16)
}

