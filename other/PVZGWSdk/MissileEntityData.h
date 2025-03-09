///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DamageType.h>
#include <fb/GhostedProjectileEntityData.h>
#include <fb/MissileLockableInfoData.h>
#include <fb/MissileUnguidedData.h>
#include <fb/NearTargetDetonationData.h>
#include <fb/String.h>
#include <fb/TeamId.h>
#include <fb/WarnTarget.h>

namespace fb {
	class EffectBlueprint;
	class ExplosionEntityData;
	class LockingControllerData;
	class SoundAsset;
}

namespace fb {
	class MissileEntityData : public GhostedProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MissileEntityData"); }
		virtual ~MissileEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		MissileEntityData() {
			m_engineStrength = 100.f;
			m_maxSpeed = 100.f;
			m_engineTimeToIgnition = 0.f;
			m_engineTimeToLive = 40.f;
			m_timeToActivateGuidingSystem = 0.f;
			m_timeToArm = 0.f;
			m_maxTurnAngle = 90.f;
			m_minTurnAngle = -1.f;
			m_turnAngleMultiplier = 1.f;
			m_drag = 10.f;
			m_gravity = -9.8f;
			m_flyBySoundRadius = 5.f;
			m_flyBySoundSpeed = 10.f;
			m_impactImpulse = 50.f;
			m_damage = 20.f;
			m_damageType = DamageType::DamageType_Normal;
			m_defaultTeam = TeamId::TeamNeutral;
			m_warnTarget = WarnTarget::wtWarnNone;
			m_maxBankAngle = 90.f;
			m_bankingSpeed = 1.f;
			m_minGhostFrequency = 0.f;
			m_applyGravityWhenGuided = false;
			m_groupDamage = false;
			m_warnOnPointingMissile = false;
			m_enableBanking = false;

			m_enabled = false;
		};

		CtrRef<EffectBlueprint> m_engineEffect; // 0x130 (304)
		CtrRef<ExplosionEntityData> m_dudExplosion; // 0x138 (312)
		CtrRef<SoundAsset> m_flyBySound; // 0x140 (320)
		float m_engineStrength; // 0x148 (328)
		float m_maxSpeed; // 0x14C (332)
		float m_engineTimeToIgnition; // 0x150 (336)
		float m_engineTimeToLive; // 0x154 (340)
		float m_timeToActivateGuidingSystem; // 0x158 (344)
		float m_timeToArm; // 0x15C (348)
		float m_maxTurnAngle; // 0x160 (352)
		float m_minTurnAngle; // 0x164 (356)
		float m_turnAngleMultiplier; // 0x168 (360)
		float m_drag; // 0x16C (364)
		float m_gravity; // 0x170 (368)
		float m_flyBySoundRadius; // 0x174 (372)
		float m_flyBySoundSpeed; // 0x178 (376)
		float m_impactImpulse; // 0x17C (380)
		float m_damage; // 0x180 (384)
		DamageType m_damageType; // 0x184 (388)
		TeamId m_defaultTeam; // 0x188 (392)
		WarnTarget m_warnTarget; // 0x18C (396)
		CtrRef<LockingControllerData> m_lockingController; // 0x190 (400)
		MissileLockableInfoData m_lockableInfo; // 0x198 (408)
		MissileUnguidedData m_unguidedData; // 0x1A0 (416)
		NearTargetDetonationData m_nearTargetDetonation; // 0x1B4 (436)
		float m_maxBankAngle; // 0x1C4 (452)
		float m_bankingSpeed; // 0x1C8 (456)
		String m_icon; // 0x1D0 (464)
		String m_targetIcon; // 0x1D8 (472)
		String m_targetIconEnemy; // 0x1E0 (480)
		float m_minGhostFrequency; // 0x1E8 (488)
		bool m_applyGravityWhenGuided; // 0x1EC (492)
		bool m_groupDamage; // 0x1ED (493)
		bool m_warnOnPointingMissile; // 0x1EE (494)
		bool m_enableBanking; // 0x1EF (495)
	}; // 0x1F0 (496)
}

