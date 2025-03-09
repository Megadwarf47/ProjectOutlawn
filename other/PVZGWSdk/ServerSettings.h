///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class ServerSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ServerSettings"); }
		virtual ~ServerSettings() override {}
		ServerSettings() {
			m_remoteControlPort = 0;
			m_maxQueriesPerSecond = 1000;
			m_timeoutTime = 600.f;
			m_playerCountNeededForMultiplayer = 8;
			m_loadingTimeout = 15.f;
			m_ingameTimeout = 15.f;
			m_outgoingFrequency = 15.f;
			m_incomingRate = 30000;
			m_outgoingRate = 80000;
			m_dedicatedServerCpu = -1;
			m_saveGameVersion = 3;
			m_vehicleSpawnDelayModifier = 1.f;
			m_humanHealthMultiplier = 1.f;
			m_respawnTimeModifier = 1.f;
			m_queryProviderEnabled = false;
			m_debrisClusterEnabled = true;
			m_vegetationEnabled = true;
			m_waterPhysicsEnabled = true;
			m_isDesertingAllowed = false;
			m_isRenderDamageEvents = false;
			m_respawnOnDeathPosition = false;
			m_isStatsEnabled = false;
			m_isNetworkStatsEnabled = false;
			m_isAiEnabled = true;
			m_isDestructionEnabled = true;
			m_isSoldierAnimationEnabled = true;
			m_isSoldierDetailedCollisionEnabled = false;
			m_loadSavePoint = false;
			m_disableCutscenes = false;
			m_havokVisualDebugger = false;
			m_havokCaptureToFile = false;
			m_showTriggerDebugText = false;
			m_timeoutGame = false;
			m_aiLooksIntoCamera = true;
			m_deathmatchDebugInfo = false;
			m_jobEnable = true;
			m_threadingEnable = false;
			m_drawActivePhysicsObjects = false;
			m_isRanked = true;
			m_unlockResolver = false;
			m_scoringLogEnabled = false;
			m_forcePlaylist = false;
			m_autoUnspawnBangers = true;
			m_regulatedAIThrottle = true;
			m_enableAnimationCulling = false;
			m_fallBackToSquadSpawn = false;
			m_vehicleSpawnAllowed = true;
			m_administrationEnabled = true;
			m_administrationLogEnabled = false;
			m_administrationTimeStampLogNames = false;
			m_administrationEventsEnabled = false;
			m_administrationServerNameRestricted = false;
		};

		String m_instancePath; // 0x20 (32)
		u32 m_remoteControlPort; // 0x28 (40)
		u32 m_maxQueriesPerSecond; // 0x2C (44)
		String m_savePoint; // 0x30 (48)
		float m_timeoutTime; // 0x38 (56)
		u32 m_playerCountNeededForMultiplayer; // 0x3C (60)
		String m_debugMenuClick; // 0x40 (64)
		float m_loadingTimeout; // 0x48 (72)
		float m_ingameTimeout; // 0x4C (76)
		float m_outgoingFrequency; // 0x50 (80)
		u32 m_incomingRate; // 0x54 (84)
		u32 m_outgoingRate; // 0x58 (88)
		String m_playlist; // 0x60 (96)
		s32 m_dedicatedServerCpu; // 0x68 (104)
		u32 m_saveGameVersion; // 0x6C (108)
		String m_serverName; // 0x70 (112)
		String m_serverPassword; // 0x78 (120)
		float m_vehicleSpawnDelayModifier; // 0x80 (128)
		float m_humanHealthMultiplier; // 0x84 (132)
		float m_respawnTimeModifier; // 0x88 (136)
		String m_administrationPassword; // 0x90 (144)
		String m_remoteAdministrationPort; // 0x98 (152)
		bool m_queryProviderEnabled; // 0xA0 (160)
		bool m_debrisClusterEnabled; // 0xA1 (161)
		bool m_vegetationEnabled; // 0xA2 (162)
		bool m_waterPhysicsEnabled; // 0xA3 (163)
		bool m_isDesertingAllowed; // 0xA4 (164)
		bool m_isRenderDamageEvents; // 0xA5 (165)
		bool m_respawnOnDeathPosition; // 0xA6 (166)
		bool m_isStatsEnabled; // 0xA7 (167)
		bool m_isNetworkStatsEnabled; // 0xA8 (168)
		bool m_isAiEnabled; // 0xA9 (169)
		bool m_isDestructionEnabled; // 0xAA (170)
		bool m_isSoldierAnimationEnabled; // 0xAB (171)
		bool m_isSoldierDetailedCollisionEnabled; // 0xAC (172)
		bool m_loadSavePoint; // 0xAD (173)
		bool m_disableCutscenes; // 0xAE (174)
		bool m_havokVisualDebugger; // 0xAF (175)
		bool m_havokCaptureToFile; // 0xB0 (176)
		bool m_showTriggerDebugText; // 0xB1 (177)
		bool m_timeoutGame; // 0xB2 (178)
		bool m_aiLooksIntoCamera; // 0xB3 (179)
		bool m_deathmatchDebugInfo; // 0xB4 (180)
		bool m_jobEnable; // 0xB5 (181)
		bool m_threadingEnable; // 0xB6 (182)
		bool m_drawActivePhysicsObjects; // 0xB7 (183)
		bool m_isRanked; // 0xB8 (184)
		bool m_unlockResolver; // 0xB9 (185)
		bool m_scoringLogEnabled; // 0xBA (186)
		bool m_forcePlaylist; // 0xBB (187)
		bool m_autoUnspawnBangers; // 0xBC (188)
		bool m_regulatedAIThrottle; // 0xBD (189)
		bool m_enableAnimationCulling; // 0xBE (190)
		bool m_fallBackToSquadSpawn; // 0xBF (191)
		bool m_vehicleSpawnAllowed; // 0xC0 (192)
		bool m_administrationEnabled; // 0xC1 (193)
		bool m_administrationLogEnabled; // 0xC2 (194)
		bool m_administrationTimeStampLogNames; // 0xC3 (195)
		bool m_administrationEventsEnabled; // 0xC4 (196)
		bool m_administrationServerNameRestricted; // 0xC5 (197)
	}; // 0xC8 (200)
}

