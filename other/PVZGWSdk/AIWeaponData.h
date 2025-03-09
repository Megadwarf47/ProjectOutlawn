///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BurstLimit.h>
#include <fb/GameAIWeaponData.h>
#include <fb/RecoveryTimes.h>
#include <fb/SweepSelectionType.h>

namespace fb {
	class AIWeaponData : public GameAIWeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIWeaponData"); }
		virtual ~AIWeaponData() override {}
		AIWeaponData() {
			m_aimInfrontPercentage = 0.7f;
			m_pressure = 0.f;
			m_pressureDuration = 0.f;
			m_weaponSelectionChance = 1.f;
			m_urgency = 1.f;
			m_minRange = 0.f;
			m_maxRange = 0.f;
			m_optimalRangePercentage = 0.f;
			m_minExtraReloadTime = 0.f;
			m_maxExtraReloadTime = 0.f;
			m_waitTimeBeforeFire = 0.f;
			m_minBurstCoolDownTime = 1.f;
			m_maxBurstCoolDownTime = 2.f;
			m_lostTargetBurstCoolDownModifier = 2.f;
			m_sweepType = SweepSelectionType::SstTargetLost;
			m_sweepDistance = 0.f;
			m_sweepTime = 0.5f;
			m_innerInaccurateDistance = 5.f;
			m_outerInaccurateDistance = 10.f;
			m_hitBoxTargetHeight = 0.7f;
			m_hitBoxHeightVariance = 0.2f;
			m_minAccuracyAtMaxDistance = 0.5f;
			m_maxAccuracyAtMinDistance = 1.f;
			m_startAccuracyPercentage = 0.5f;
			m_finalAccuracyPercentage = 0.5f;
			m_accuracyIncreaseTime = 3.f;
			m_accuracyModifier = 1.f;
			m_accuracyModifierVsNonHumans = 0.3f;
			m_closeRangeAccuracyDistance = 15.f;
			m_stoppedTimeAfterFiring = 0.f;
			m_indirect = false;
			m_aimInfrontOfTarget = false;
			m_requiresPressure = false;
			m_requiresPressureToEquip = false;
			m_isAiAllowed = true;
			m_visibilityRequiredToEquip = false;
			m_isMelee = false;
			m_mustFire = false;
			m_improveAccuracyOverBurst = false;
			m_fireEntireBurst = false;
			m_aimHighIndirectPath = false;
			m_sweepFirstAttack = false;
			m_inaccuracyFollowsTarget = true;
			m_useInaccuracyAtCloseRange = false;
			m_stopToFire = false;
			m_enablePuppetMode = false;
		};

		float m_aimInfrontPercentage; // 0x18 (24)
		float m_pressure; // 0x1C (28)
		float m_pressureDuration; // 0x20 (32)
		RecoveryTimes m_recoveryTimes; // 0x24 (36)
		float m_weaponSelectionChance; // 0x2C (44)
		float m_urgency; // 0x30 (48)
		float m_minRange; // 0x34 (52)
		float m_maxRange; // 0x38 (56)
		float m_optimalRangePercentage; // 0x3C (60)
		float m_minExtraReloadTime; // 0x40 (64)
		float m_maxExtraReloadTime; // 0x44 (68)
		float m_waitTimeBeforeFire; // 0x48 (72)
		BurstLimit m_burstLimitNear; // 0x4C (76)
		BurstLimit m_burstLimitFar; // 0x54 (84)
		float m_minBurstCoolDownTime; // 0x5C (92)
		float m_maxBurstCoolDownTime; // 0x60 (96)
		float m_lostTargetBurstCoolDownModifier; // 0x64 (100)
		SweepSelectionType m_sweepType; // 0x68 (104)
		float m_sweepDistance; // 0x6C (108)
		float m_sweepTime; // 0x70 (112)
		float m_innerInaccurateDistance; // 0x74 (116)
		float m_outerInaccurateDistance; // 0x78 (120)
		float m_hitBoxTargetHeight; // 0x7C (124)
		float m_hitBoxHeightVariance; // 0x80 (128)
		float m_minAccuracyAtMaxDistance; // 0x84 (132)
		float m_maxAccuracyAtMinDistance; // 0x88 (136)
		float m_startAccuracyPercentage; // 0x8C (140)
		float m_finalAccuracyPercentage; // 0x90 (144)
		float m_accuracyIncreaseTime; // 0x94 (148)
		float m_accuracyModifier; // 0x98 (152)
		float m_accuracyModifierVsNonHumans; // 0x9C (156)
		float m_closeRangeAccuracyDistance; // 0xA0 (160)
		float m_stoppedTimeAfterFiring; // 0xA4 (164)
		bool m_indirect; // 0xA8 (168)
		bool m_aimInfrontOfTarget; // 0xA9 (169)
		bool m_requiresPressure; // 0xAA (170)
		bool m_requiresPressureToEquip; // 0xAB (171)
		bool m_isAiAllowed; // 0xAC (172)
		bool m_visibilityRequiredToEquip; // 0xAD (173)
		bool m_isMelee; // 0xAE (174)
		bool m_mustFire; // 0xAF (175)
		bool m_improveAccuracyOverBurst; // 0xB0 (176)
		bool m_fireEntireBurst; // 0xB1 (177)
		bool m_aimHighIndirectPath; // 0xB2 (178)
		bool m_sweepFirstAttack; // 0xB3 (179)
		bool m_inaccuracyFollowsTarget; // 0xB4 (180)
		bool m_useInaccuracyAtCloseRange; // 0xB5 (181)
		bool m_stopToFire; // 0xB6 (182)
		bool m_enablePuppetMode; // 0xB7 (183)
	}; // 0xB8 (184)
}

