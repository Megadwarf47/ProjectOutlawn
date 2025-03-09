///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LogFileCollisionMode.h>
#include <fb/RefArray.h>
#include <fb/SKU.h>
#include <fb/String.h>
#include <fb/SystemSettings.h>
#include <fb/TeamId.h>

namespace fb {
	class DifficultyDatas;
	class GameModeViewDefinition;
	class GameSettingsComponent;
	class InputConfigurationAsset;
	class PlayerData;
	class SubWorldInclusion;
	class VersionData;
}

namespace fb {
	class GameSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameSettings"); }
		virtual ~GameSettings() override {}
		GameSettings() {
			m_maxPlayerCount = 70;
			m_maxSpectatorCount = 0;
			m_minPlayerCountElimination = 6;
			m_logFileCollisionMode = LogFileCollisionMode::LFCM_Overwrite;
			m_logFileRotationHistoryLength = 20;
			m_defaultTeamId = TeamId::Team1;
			m_pS3ContentRatingAge = 0;
			m_logHistory = 20;
			m_timeBeforeSpawnIsAllowed = 10.f;
			m_levelWarmUpTime = 10.f;
			m_timeToWaitForQuitTaskCompletion = 10.f;
			m_difficultyIndex = -1;
			m_currentSKU = SKU::WW;
			m_logFileEnable = true;
			m_resourceRefreshAlwaysAllowed = false;
			m_spawnMaxLocalPlayersOnStartup = false;
			m_useSpeedBasedDetailedCollision = false;
			m_useSingleWeaponSelector = false;
			m_autoAimEnabled = true;
			m_hasUnlimitedAmmo = false;
			m_hasUnlimitedMags = false;
			m_rotateLogs = false;
			m_adjustVehicleCenterOfMass = true;
			m_aimAssistEnabled = true;
			m_aimAssistUsePolynomials = true;
			m_forceFreeStreaming = false;
			m_forceDisableFreeStreaming = false;
			m_isGodMode = false;
			m_isJesusMode = false;
			m_isJesusModeAi = false;
			m_gameAdministrationEnabled = true;
			m_allowDestructionOutsideCombatArea = false;
			m_isDemo = false;

			m_platform = GamePlatform::GamePlatform_Invalid;
		};

		u32 m_maxPlayerCount; // 0x20 (32)
		u32 m_maxSpectatorCount; // 0x24 (36)
		u32 m_minPlayerCountElimination; // 0x28 (40)
		LogFileCollisionMode m_logFileCollisionMode; // 0x2C (44)
		u32 m_logFileRotationHistoryLength; // 0x30 (48)
		String m_level; // 0x38 (56)
		String m_startPoint; // 0x40 (64)
		RefArray<InputConfigurationAsset> m_inputConfiguration; // 0x48 (72)
		String m_activeGameModeViewDefinition; // 0x50 (80)
		RefArray<GameModeViewDefinition> m_gameModeViewDefinitions; // 0x58 (88)
		TeamId m_defaultTeamId; // 0x60 (96)
		u32 m_pS3ContentRatingAge; // 0x64 (100)
		u32 m_logHistory; // 0x68 (104)
		CtrRef<VersionData> m_version; // 0x70 (112)
		CtrRef<SubWorldInclusion> m_layerInclusionTable; // 0x78 (120)
		String m_defaultLayerInclusion; // 0x80 (128)
		float m_timeBeforeSpawnIsAllowed; // 0x88 (136)
		float m_levelWarmUpTime; // 0x8C (140)
		float m_timeToWaitForQuitTaskCompletion; // 0x90 (144)
		CtrRef<PlayerData> m_player; // 0x98 (152)
		CtrRef<DifficultyDatas> m_difficultySettings; // 0xA0 (160)
		s32 m_difficultyIndex; // 0xA8 (168)
		SKU m_currentSKU; // 0xAC (172)
		RefArray<GameSettingsComponent> m_gameSettingsComponents; // 0xB0 (176)
		bool m_logFileEnable; // 0xB8 (184)
		bool m_resourceRefreshAlwaysAllowed; // 0xB9 (185)
		bool m_spawnMaxLocalPlayersOnStartup; // 0xBA (186)
		bool m_useSpeedBasedDetailedCollision; // 0xBB (187)
		bool m_useSingleWeaponSelector; // 0xBC (188)
		bool m_autoAimEnabled; // 0xBD (189)
		bool m_hasUnlimitedAmmo; // 0xBE (190)
		bool m_hasUnlimitedMags; // 0xBF (191)
		bool m_rotateLogs; // 0xC0 (192)
		bool m_adjustVehicleCenterOfMass; // 0xC1 (193)
		bool m_aimAssistEnabled; // 0xC2 (194)
		bool m_aimAssistUsePolynomials; // 0xC3 (195)
		bool m_forceFreeStreaming; // 0xC4 (196)
		bool m_forceDisableFreeStreaming; // 0xC5 (197)
		bool m_isGodMode; // 0xC6 (198)
		bool m_isJesusMode; // 0xC7 (199)
		bool m_isJesusModeAi; // 0xC8 (200)
		bool m_gameAdministrationEnabled; // 0xC9 (201)
		bool m_allowDestructionOutsideCombatArea; // 0xCA (202)
		bool m_isDemo; // 0xCB (203)
	}; // 0xD0 (208)
}

