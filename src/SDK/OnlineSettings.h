///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BackendType.h>
#include <fb/CtrRef.h>
#include <fb/OnlineEnvironment.h>
#include <fb/OnlinePlatformConfiguration.h>
#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class LicenseConfiguration;
	class OnlineProviderAsset;
	class RichPresenceData;
}

namespace fb {
	class OnlineSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OnlineSettings"); }
		virtual ~OnlineSettings() override {}
		OnlineSettings() {
			m_backend = BackendType::Backend_Lan;
			m_peerBackend = BackendType::Backend_Peer;
			m_environment = OnlineEnvironment::OnlineEnvironment_Development;
			m_blazeLogLevel = 0;
			m_dirtySockLogLevel = 0;
			m_negativeUserCacheRefreshPeriod = 3600;
			m_blazeServerConnectionTimeout = 10000;
			m_blazeServerTimeout = 10000;
			m_blazeClientConnectionTimeout = 13000;
			m_blazeClientTimeout = 13000;
			m_clientIsPresenceEnabled = true;
			m_serverIsPresenceEnabled = true;
			m_useExternalLoginFlow = false;
			m_isSecure = true;
			m_enableQoS = true;
			m_matchmakeImmediately = false;
			m_serverIsReconfigurable = false;
			m_supportHostMigration = false;
			m_multipleVirtualMachines = false;
			m_dirtySockVoipEnabled = true;
			m_serverAllowAnyReputation = false;
			m_debugSkipSignIn = false;
			m_isOriginEnvProd = false;
		};

		BackendType m_backend; // 0x20 (32)
		BackendType m_peerBackend; // 0x24 (36)
		OnlineEnvironment m_environment; // 0x28 (40)
		CtrRef<OnlineProviderAsset> m_provider; // 0x30 (48)
		Array<OnlinePlatformConfiguration> m_platforms; // 0x38 (56)
		String m_serviceNameOverride; // 0x40 (64)
		s32 m_blazeLogLevel; // 0x48 (72)
		s32 m_dirtySockLogLevel; // 0x4C (76)
		CtrRef<RichPresenceData> m_richPresence; // 0x50 (80)
		CtrRef<LicenseConfiguration> m_licenseConfig; // 0x58 (88)
		String m_matchmakingOptions; // 0x60 (96)
		String m_matchmakingMode; // 0x68 (104)
		String m_region; // 0x70 (112)
		String m_country; // 0x78 (120)
		String m_pingSite; // 0x80 (128)
		String m_matchmakingToken; // 0x88 (136)
		u32 m_negativeUserCacheRefreshPeriod; // 0x90 (144)
		String m_serverLoginEmail; // 0x98 (152)
		String m_serverLoginPassword; // 0xA0 (160)
		String m_serverLoginPersonaName; // 0xA8 (168)
		s32 m_blazeServerConnectionTimeout; // 0xB0 (176)
		s32 m_blazeServerTimeout; // 0xB4 (180)
		s32 m_blazeClientConnectionTimeout; // 0xB8 (184)
		s32 m_blazeClientTimeout; // 0xBC (188)
		bool m_clientIsPresenceEnabled; // 0xC0 (192)
		bool m_serverIsPresenceEnabled; // 0xC1 (193)
		bool m_useExternalLoginFlow; // 0xC2 (194)
		bool m_isSecure; // 0xC3 (195)
		bool m_enableQoS; // 0xC4 (196)
		bool m_matchmakeImmediately; // 0xC5 (197)
		bool m_serverIsReconfigurable; // 0xC6 (198)
		bool m_supportHostMigration; // 0xC7 (199)
		bool m_multipleVirtualMachines; // 0xC8 (200)
		bool m_dirtySockVoipEnabled; // 0xC9 (201)
		bool m_serverAllowAnyReputation; // 0xCA (202)
		bool m_debugSkipSignIn; // 0xCB (203)
		bool m_isOriginEnvProd; // 0xCC (204)
	}; // 0xD0 (208)
}

