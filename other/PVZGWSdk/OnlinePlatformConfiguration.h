///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GamePlatform.h>
#include <fb/RefArray.h>
#include <fb/Types.h>

namespace fb {
	class OnlineServicesAsset;
	class PresenceBackendData;
	class ServerBackendData;
}

namespace fb {
	struct OnlinePlatformConfiguration {
		OnlinePlatformConfiguration() {
			m_platform = GamePlatform::GamePlatform_Invalid;
			m_isFallback = false;
		};

		GamePlatform m_platform; // 0x0 (0)
		CtrRef<OnlineServicesAsset> m_services; // 0x8 (8)
		RefArray<PresenceBackendData> m_clientBackends; // 0x10 (16)
		RefArray<ServerBackendData> m_serverBackends; // 0x18 (24)
		bool m_isFallback; // 0x20 (32)
	}; // 0x28 (40)
}

