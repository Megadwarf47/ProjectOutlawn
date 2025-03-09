///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DTagUploadPolicy.h>
#include <fb/OnlineSettings.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/TelemetryOnlineSettings.h>

namespace fb {
	class EntitlementQuery;
}

namespace fb {
	class VeniceOnlineSettings : public OnlineSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceOnlineSettings"); }
		virtual ~VeniceOnlineSettings() override {}
		VeniceOnlineSettings() {
			m_queueCapacityOverride = -1;
			m_dogTagUploadPolicy = DTagUploadPolicy::DTUP_FirstTimeSeenAndEndOfRound;
			m_pingPeriod = 10;
			m_blazeMatchmakeResetProbability = 0.f;
			m_minCommanderRank = 10;
			m_enableSnowroller = false;
			m_punkBusterActivateClient = false;
			m_punkBusterActivateServer = false;
			m_punkBusterKillSwitchActivated = false;
			m_fairFightEnabled = false;
			m_battlelogReport = false;
			m_isCommander = false;
			m_enableProgressionUpload = false;
			m_blazeDisableDownloadFriendsStats = true;
			m_blazeDisableAssociationLists = true;
			m_blazeDisableAllStatsDownloading = true;
			m_disableMiniGameBrowserAutoUpdate = true;
			m_blazeDisablePartyMatchmaking = true;
			m_packExternalPurchasesKillSwitch = true;
			m_kickPlayerOnStatsDownloadFailure = false;
		};

		String m_clientGameConfigurationOverride; // 0xD0 (208)
		RefArray<EntitlementQuery> m_entitlementQueries; // 0xD8 (216)
		String m_sonarVoipAddress; // 0xE0 (224)
		s32 m_queueCapacityOverride; // 0xE8 (232)
		DTagUploadPolicy m_dogTagUploadPolicy; // 0xEC (236)
		u32 m_pingPeriod; // 0xF0 (240)
		String m_battlelogReportURL; // 0xF8 (248)
		String m_battlelogApiUrl; // 0x100 (256)
		float m_blazeMatchmakeResetProbability; // 0x108 (264)
		TelemetryOnlineSettings m_telemetrySettings; // 0x110 (272)
		u32 m_minCommanderRank; // 0x160 (352)
		bool m_enableSnowroller; // 0x164 (356)
		bool m_punkBusterActivateClient; // 0x165 (357)
		bool m_punkBusterActivateServer; // 0x166 (358)
		bool m_punkBusterKillSwitchActivated; // 0x167 (359)
		bool m_fairFightEnabled; // 0x168 (360)
		bool m_battlelogReport; // 0x169 (361)
		bool m_isCommander; // 0x16A (362)
		bool m_enableProgressionUpload; // 0x16B (363)
		bool m_blazeDisableDownloadFriendsStats; // 0x16C (364)
		bool m_blazeDisableAssociationLists; // 0x16D (365)
		bool m_blazeDisableAllStatsDownloading; // 0x16E (366)
		bool m_disableMiniGameBrowserAutoUpdate; // 0x16F (367)
		bool m_blazeDisablePartyMatchmaking; // 0x170 (368)
		bool m_packExternalPurchasesKillSwitch; // 0x171 (369)
		bool m_kickPlayerOnStatsDownloadFailure; // 0x172 (370)
	}; // 0x178 (376)
}

