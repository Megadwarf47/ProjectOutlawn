///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/SystemSettings.h>
#include <fb/VoiceChannel.h>

namespace fb {
	class BFServerSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFServerSettings"); }
		virtual ~BFServerSettings() override {}
		BFServerSettings() {
			m_forceTeamForPlayerTagTeam = 1;
			m_forceSquadForPlayerTagSquad = 1;
			m_inActivityTimeOut = 180.f;
			m_inActivityThreshold = 0.1f;
			m_noInteractivityBanRoundCount = 0;
			m_teamKillCountForKick = 6;
			m_teamKillValueForKick = 5.1f;
			m_teamKillValueIncrease = 1.f;
			m_teamKillValueDecreasePerSecond = 0.05f;
			m_teamKillKickForBan = 3;
			m_roundMaxPlayerCount = -1;
			m_roundMinPlayerCount = -1;
			m_roundLockdownCountdown = 10;
			m_roundRestartCountdown = -1;
			m_roundWarmupTimeout = 600;
			m_teamSwitchImbalanceLimit = 2;
			m_gameSize = 0;
			m_commanderSize = 4294967295;
			m_defaultVoiceChannel = VoiceChannel::VoiceChannel_Team;
			m_deathmatchFriendZoneFallbackCount = -1;
			m_teamSwitchCooldownTime = 20.f;
			m_serverConfigurationRefreshInterval = -1;
			m_alternateEORTimeout = -1.f;
			m_maxNumSoldierCorpses = 10;
			m_commanderRankThreshold = 10;
			m_autoBalance = true;
			m_overrideAutoBalance = false;
			m_disableBattlePickups = false;
			m_isManDownRotationEnabled = true;
			m_isKillerCameraEnabled = true;
			m_mapSequencerEnabled = true;
			m_pvzBlazePlaylistEnabled = true;
			m_kickAPlayerOnVIPJoin = false;
			m_alwaysAllowedToSpectate = false;
		};

		String m_forceTeamForPlayerTag; // 0x20 (32)
		s32 m_forceTeamForPlayerTagTeam; // 0x28 (40)
		String m_forceSquadForPlayerTag; // 0x30 (48)
		s32 m_forceSquadForPlayerTagSquad; // 0x38 (56)
		String m_forceTeamAndSquadForPlayers; // 0x40 (64)
		float m_inActivityTimeOut; // 0x48 (72)
		float m_inActivityThreshold; // 0x4C (76)
		u32 m_noInteractivityBanRoundCount; // 0x50 (80)
		u32 m_teamKillCountForKick; // 0x54 (84)
		float m_teamKillValueForKick; // 0x58 (88)
		float m_teamKillValueIncrease; // 0x5C (92)
		float m_teamKillValueDecreasePerSecond; // 0x60 (96)
		u32 m_teamKillKickForBan; // 0x64 (100)
		s32 m_roundMaxPlayerCount; // 0x68 (104)
		s32 m_roundMinPlayerCount; // 0x6C (108)
		s32 m_roundLockdownCountdown; // 0x70 (112)
		s32 m_roundRestartCountdown; // 0x74 (116)
		s32 m_roundWarmupTimeout; // 0x78 (120)
		String m_bannerUrl; // 0x80 (128)
		String m_serverPreset; // 0x88 (136)
		String m_serverType; // 0x90 (144)
		String m_serverExperience; // 0x98 (152)
		String m_serverDescription; // 0xA0 (160)
		String m_serverMessage; // 0xA8 (168)
		String m_serverAdministrationSettings; // 0xB0 (176)
		String m_serverAdministrationMapRotation; // 0xB8 (184)
		String m_serverAdministrationMapRotationInformation; // 0xC0 (192)
		String m_spectators; // 0xC8 (200)
		String m_punkBusterVersion; // 0xD0 (208)
		String m_pvzBlazePlaylist; // 0xD8 (216)
		u32 m_teamSwitchImbalanceLimit; // 0xE0 (224)
		u32 m_gameSize; // 0xE4 (228)
		u32 m_commanderSize; // 0xE8 (232)
		String m_gameMod; // 0xF0 (240)
		VoiceChannel m_defaultVoiceChannel; // 0xF8 (248)
		s32 m_deathmatchFriendZoneFallbackCount; // 0xFC (252)
		float m_teamSwitchCooldownTime; // 0x100 (256)
		s32 m_serverConfigurationRefreshInterval; // 0x104 (260)
		String m_overrideServerConfigurationStartTime; // 0x108 (264)
		float m_alternateEORTimeout; // 0x110 (272)
		s32 m_maxNumSoldierCorpses; // 0x114 (276)
		s32 m_commanderRankThreshold; // 0x118 (280)
		bool m_autoBalance; // 0x11C (284)
		bool m_overrideAutoBalance; // 0x11D (285)
		bool m_disableBattlePickups; // 0x11E (286)
		bool m_isManDownRotationEnabled; // 0x11F (287)
		bool m_isKillerCameraEnabled; // 0x120 (288)
		bool m_mapSequencerEnabled; // 0x121 (289)
		bool m_pvzBlazePlaylistEnabled; // 0x122 (290)
		bool m_kickAPlayerOnVIPJoin; // 0x123 (291)
		bool m_alwaysAllowedToSpectate; // 0x124 (292)
	}; // 0x128 (296)
}

