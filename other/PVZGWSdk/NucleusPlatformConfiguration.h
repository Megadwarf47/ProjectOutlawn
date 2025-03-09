///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GamePlatform.h>
#include <fb/String.h>

namespace fb {
	struct NucleusPlatformConfiguration {
		NucleusPlatformConfiguration() {
			m_platform = GamePlatform::GamePlatform_Invalid;
		};

		GamePlatform m_platform; // 0x0 (0)
		String m_clientId; // 0x8 (8)
		String m_clientSecret; // 0x10 (16)
		String m_loginScope; // 0x18 (24)
		String m_clientRedirectUrl; // 0x20 (32)
		String m_displayType; // 0x28 (40)
		String m_blazeServerClientId; // 0x30 (48)
		String m_blazeServerRedirectUrl; // 0x38 (56)
	}; // 0x40 (64)
}

