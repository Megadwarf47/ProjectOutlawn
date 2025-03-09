///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ServerTypeValues.h>
#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class SyncedBFSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SyncedBFSettings"); }
		virtual ~SyncedBFSettings() override {}
		SyncedBFSettings() {
			m_teamSwitchingCooldownTime = 20.f;
			m_gameModeCounterModifier = 1.f;
			m_roundTimeLimit = 0.f;
			m_spottedTime = 10.f;
			m_timeRequiredToSpot = 0.25f;
			m_spottingInterval = 0.25f;
			m_spottingFov = 10.f;
			m_spottingDistance = 50.f;
			m_spotOnFireMultiplier = 0.34f;
			m_spotIconFadeDistance = 30.f;
			m_spotIconFadeEndDistance = 15.f;
			m_team1Faction = -1;
			m_team2Faction = -1;
			m_team3Faction = -1;
			m_team4Faction = -1;
			m_serverType = ServerTypeValues::ServerType_RANKED;
			m_allUnlocksUnlocked = false;
			m_noMinimap = false;
			m_noHud = false;
			m_noMinimapSpotting = false;
			m_no3dSpotting = false;
			m_noNameTag = false;
			m_onlySquadLeaderSpawn = false;
			m_teamSwitchingAllowed = true;
			m_commanderEnabled = true;
			m_revertBackToBF3KillerCamera = false;
			m_disableHitIndicators = false;
			m_disableVehicleCommanderActions = false;
			m_fieldUpgradeSystemActive = true;
		};

		float m_teamSwitchingCooldownTime; // 0x20 (32)
		float m_gameModeCounterModifier; // 0x24 (36)
		float m_roundTimeLimit; // 0x28 (40)
		float m_spottedTime; // 0x2C (44)
		float m_timeRequiredToSpot; // 0x30 (48)
		float m_spottingInterval; // 0x34 (52)
		float m_spottingFov; // 0x38 (56)
		float m_spottingDistance; // 0x3C (60)
		float m_spotOnFireMultiplier; // 0x40 (64)
		float m_spotIconFadeDistance; // 0x44 (68)
		float m_spotIconFadeEndDistance; // 0x48 (72)
		String m_jesusModeForPlayerTag; // 0x50 (80)
		s32 m_team1Faction; // 0x58 (88)
		s32 m_team2Faction; // 0x5C (92)
		s32 m_team3Faction; // 0x60 (96)
		s32 m_team4Faction; // 0x64 (100)
		String m_fieldSpecLevels; // 0x68 (104)
		ServerTypeValues m_serverType; // 0x70 (112)
		bool m_allUnlocksUnlocked; // 0x74 (116)
		bool m_noMinimap; // 0x75 (117)
		bool m_noHud; // 0x76 (118)
		bool m_noMinimapSpotting; // 0x77 (119)
		bool m_no3dSpotting; // 0x78 (120)
		bool m_noNameTag; // 0x79 (121)
		bool m_onlySquadLeaderSpawn; // 0x7A (122)
		bool m_teamSwitchingAllowed; // 0x7B (123)
		bool m_commanderEnabled; // 0x7C (124)
		bool m_revertBackToBF3KillerCamera; // 0x7D (125)
		bool m_disableHitIndicators; // 0x7E (126)
		bool m_disableVehicleCommanderActions; // 0x7F (127)
		bool m_fieldUpgradeSystemActive; // 0x80 (128)
	}; // 0x88 (136)
}

