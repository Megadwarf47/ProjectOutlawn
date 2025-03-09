///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DismembermentTrigger.h>
#include <fb/PVZHealthBinding.h>
#include <fb/PVZRotateToHitData.h>
#include <fb/PoseConstraintsData.h>
#include <fb/SoldierHealthModuleBinding.h>
#include <fb/SoldierHealthModuleData.h>
#include <fb/String.h>

namespace fb {
	class PVZSoldierHealthModuleData : public SoldierHealthModuleData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierHealthModuleData"); }
		virtual ~PVZSoldierHealthModuleData() override {}
		PVZSoldierHealthModuleData() {
			m_timeForCorpse = 20.f;
			m_interactiveManDownThreshold = 10.f;
			m_manDownStateTime = 25.f;
			m_manDownDelayInputAction = 1017734666;
			m_manDownSlowDownTimeMultiplier = 0.5f;
			m_manDownSlowdownIncreasePerPress = 0.1f;
			m_manDownTimeBetweenPressToSustainDelay = 0.5f;
			m_manDownSlowdownDecreaseWithoutPress = 0.3f;
			m_manDownStateHealthPoints = 200.f;
			m_manDownConsumableReviveInputAction = 1942541400;
			m_immortalTimeAfterSpawn = 0.f;
			m_immortalTimeAfterRevive = 0.f;
			m_immortalTimeAfterTeleport = 0.f;
			m_postReviveResponseTime = 5.f;
			m_regenerationDelay = 5.f;
			m_regenerationRate = 1.f;
			m_maxRegenerationHealth = 0.f;
			m_postReviveRegenerationDelay = 1.f;
			m_postReviveRegenerationRate = 20.f;
			m_postReviveRegenerationTime = 5.f;
			m_criticalFakeImmortalTime = 0.f;
			m_sprintDisabledWhenDamagedTime = 0.f;
			m_sprintDisabledDamageThreshold = 0.f;
			m_timeUntilRevivable = 0.f;
			m_userInputDelay = 9.f;
			m_spawnAnimationTime = 2.f;
			m_maxSelfRevive = 3;
			m_interactiveManDown = false;
			m_takeDamageInInteractiveMandown = true;
			m_resetRegenTimerOnWeaponFire = true;
		};

		float m_timeForCorpse; // 0x10 (16)
		float m_interactiveManDownThreshold; // 0x14 (20)
		float m_manDownStateTime; // 0x18 (24)
		s32 m_manDownDelayInputAction; // 0x1C (28)
		float m_manDownSlowDownTimeMultiplier; // 0x20 (32)
		float m_manDownSlowdownIncreasePerPress; // 0x24 (36)
		float m_manDownTimeBetweenPressToSustainDelay; // 0x28 (40)
		float m_manDownSlowdownDecreaseWithoutPress; // 0x2C (44)
		float m_manDownStateHealthPoints; // 0x30 (48)
		s32 m_manDownConsumableReviveInputAction; // 0x34 (52)
		String m_manDownConsumableReviveKey; // 0x38 (56)
		float m_immortalTimeAfterSpawn; // 0x40 (64)
		float m_immortalTimeAfterRevive; // 0x44 (68)
		float m_immortalTimeAfterTeleport; // 0x48 (72)
		Array<s32> m_abortSpawnImmortalityInputs; // 0x50 (80)
		float m_postReviveResponseTime; // 0x58 (88)
		float m_regenerationDelay; // 0x5C (92)
		float m_regenerationRate; // 0x60 (96)
		float m_maxRegenerationHealth; // 0x64 (100)
		float m_postReviveRegenerationDelay; // 0x68 (104)
		float m_postReviveRegenerationRate; // 0x6C (108)
		float m_postReviveRegenerationTime; // 0x70 (112)
		float m_criticalFakeImmortalTime; // 0x74 (116)
		float m_sprintDisabledWhenDamagedTime; // 0x78 (120)
		float m_sprintDisabledDamageThreshold; // 0x7C (124)
		PVZRotateToHitData m_manDownRotate; // 0x80 (128)
		Array<DismembermentTrigger> m_dismembermentTriggers; // 0x88 (136)
		SoldierHealthModuleBinding m_binding; // 0x90 (144)
		PVZHealthBinding m_pvZBinding; // 0x270 (624)
		float m_timeUntilRevivable; // 0x3D8 (984)
		float m_userInputDelay; // 0x3DC (988)
		float m_spawnAnimationTime; // 0x3E0 (992)
		s32 m_maxSelfRevive; // 0x3E4 (996)
		bool m_interactiveManDown; // 0x3E8 (1000)
		bool m_takeDamageInInteractiveMandown; // 0x3E9 (1001)
		PoseConstraintsData m_interactiveManDownPoseConstraints; // 0x3EA (1002)
		bool m_resetRegenTimerOnWeaponFire; // 0x3ED (1005)
	}; // 0x3F0 (1008)
}

