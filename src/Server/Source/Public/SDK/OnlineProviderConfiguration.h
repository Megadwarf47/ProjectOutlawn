///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GamePlatform.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct OnlineProviderConfiguration {
		OnlineProviderConfiguration() {
			m_platform = GamePlatform::GamePlatform_Invalid;
			m_serverSocketPacketSize = 0;
			m_isServer = false;
		};

		GamePlatform m_platform; // 0x0 (0)
		String m_serviceName; // 0x8 (8)
		String m_client; // 0x10 (16)
		String m_sku; // 0x18 (24)
		String m_version; // 0x20 (32)
		u32 m_serverSocketPacketSize; // 0x28 (40)
		bool m_isServer; // 0x2C (44)
	}; // 0x30 (48)
}

