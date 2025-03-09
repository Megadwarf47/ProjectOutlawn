///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/Difficulty.h>
#include <fb/PersistenceGameType.h>
#include <fb/String.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class GameAIDifficultyData;
}

namespace fb {
	class DifficultyData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DifficultyData"); }
		virtual ~DifficultyData() override {}
		DifficultyData() {
			m_difficulty = Difficulty::Difficulty_Easy;
			m_scoreMultiplier = 1.f;
			m_stickyBoxModifier = Vec3(1.f, 1.f, 1.f);
			m_snapBoxModifier = Vec3(1.f, 1.f, 1.f);
			m_gameType = PersistenceGameType::PersistenceGameType_Singleplayer;
			m_humanHealthModifier = 1.f;
			m_friendsHealthModifier = 1.f;
			m_enemiesHealthModifier = 1.f;
			m_friendlyDamageModifier = 0.f;
			m_vehicleDamageModifier = 1.f;
			m_humanInCriticalHealth = 0.25f;
			m_humanInCriticalHealthDamageModifier = 0.2f;
			m_humanRegenerationRateModifier = 1.f;
			m_criticalFakeImmortalModifier = 1.f;
			m_interactiveManDownDamageModifier = 1.f;
			m_interactiveManDownTimeMultiplier = 1.f;
			m_interactiveManDownReviveTime = 5.f;
			m_adrenalineKillLimit = -1;
			m_attractDistanceFallOffModifier = Vec2(1.f, 1.f);
			m_attractSoftZoneModifier = 1.f;
			m_attractUserInputMultiplierModifier = 1.f;
			m_snapZoomPostTimeNoInputModifier = 1.f;
			m_snapZoomPostTimeModifier = 1.f;
			m_suckZoomModifier = 1.f;
			m_aiBulletDamageHumanCooldown = 0.4f;
			m_usePitchZoomSnap = true;
		};

		Difficulty m_difficulty; // 0x10 (16)
		float m_scoreMultiplier; // 0x14 (20)
		Vec3 m_stickyBoxModifier; // 0x20 (32)
		Vec3 m_snapBoxModifier; // 0x30 (48)
		PersistenceGameType m_gameType; // 0x40 (64)
		String m_readableName; // 0x48 (72)
		float m_humanHealthModifier; // 0x50 (80)
		float m_friendsHealthModifier; // 0x54 (84)
		float m_enemiesHealthModifier; // 0x58 (88)
		float m_friendlyDamageModifier; // 0x5C (92)
		float m_vehicleDamageModifier; // 0x60 (96)
		float m_humanInCriticalHealth; // 0x64 (100)
		float m_humanInCriticalHealthDamageModifier; // 0x68 (104)
		float m_humanRegenerationRateModifier; // 0x6C (108)
		float m_criticalFakeImmortalModifier; // 0x70 (112)
		float m_interactiveManDownDamageModifier; // 0x74 (116)
		float m_interactiveManDownTimeMultiplier; // 0x78 (120)
		float m_interactiveManDownReviveTime; // 0x7C (124)
		s32 m_adrenalineKillLimit; // 0x80 (128)
		Vec2 m_attractDistanceFallOffModifier; // 0x84 (132)
		float m_attractSoftZoneModifier; // 0x8C (140)
		float m_attractUserInputMultiplierModifier; // 0x90 (144)
		float m_snapZoomPostTimeNoInputModifier; // 0x94 (148)
		float m_snapZoomPostTimeModifier; // 0x98 (152)
		float m_suckZoomModifier; // 0x9C (156)
		float m_aiBulletDamageHumanCooldown; // 0xA0 (160)
		CtrRef<GameAIDifficultyData> m_aiData; // 0xA8 (168)
		bool m_usePitchZoomSnap; // 0xB0 (176)
	}; // 0xC0 (192)
}

