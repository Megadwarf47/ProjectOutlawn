///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DamageType.h>
#include <fb/MeshProjectileEntityData.h>

namespace fb {
	class ExplosionEntityData;
	class SoundAsset;
}

namespace fb {
	class BulletEntityData : public MeshProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BulletEntityData"); }
		virtual ~BulletEntityData() override {}
		BulletEntityData() {
			m_gravity = 0.f;
			m_impactImpulse = 50.f;
			m_detonationTimeVariation = 0.f;
			m_vehicleDetonationRadius = 0.f;
			m_vehicleDetonationActivationDelay = 0.f;
			m_flyBySoundRadius = 5.f;
			m_flyBySoundSpeed = 20.f;
			m_stamina = 0.f;
			m_distributeDamageOverTime = 0.f;
			m_startDamage = 20.f;
			m_endDamage = 10.f;
			m_damageFalloffStartDistance = 100.f;
			m_damageFalloffEndDistance = 200.f;
			m_damageType = DamageType::DamageType_Normal;
			m_timeToArmExplosion = 0.f;
			m_firstFrameTravelDistance = 0.f;
			m_despawnDelay = 0.f;
			m_explosionDelay = 0.f;
			m_groupDamage = false;
			m_hasVehicleDetonation = false;
			m_instantHit = false;
			m_stopTrailEffectOnUnspawn = true;
			m_explosionDelayHideMesh = false;
		};

		CtrRef<SoundAsset> m_flyBySound; // 0x120 (288)
		CtrRef<ExplosionEntityData> m_dudExplosion; // 0x128 (296)
		float m_gravity; // 0x130 (304)
		float m_impactImpulse; // 0x134 (308)
		float m_detonationTimeVariation; // 0x138 (312)
		float m_vehicleDetonationRadius; // 0x13C (316)
		float m_vehicleDetonationActivationDelay; // 0x140 (320)
		float m_flyBySoundRadius; // 0x144 (324)
		float m_flyBySoundSpeed; // 0x148 (328)
		float m_stamina; // 0x14C (332)
		float m_distributeDamageOverTime; // 0x150 (336)
		float m_startDamage; // 0x154 (340)
		float m_endDamage; // 0x158 (344)
		float m_damageFalloffStartDistance; // 0x15C (348)
		float m_damageFalloffEndDistance; // 0x160 (352)
		DamageType m_damageType; // 0x164 (356)
		float m_timeToArmExplosion; // 0x168 (360)
		float m_firstFrameTravelDistance; // 0x16C (364)
		float m_despawnDelay; // 0x170 (368)
		float m_explosionDelay; // 0x174 (372)
		bool m_groupDamage; // 0x178 (376)
		bool m_hasVehicleDetonation; // 0x179 (377)
		bool m_instantHit; // 0x17A (378)
		bool m_stopTrailEffectOnUnspawn; // 0x17B (379)
		bool m_explosionDelayHideMesh; // 0x17C (380)
	}; // 0x180 (384)
}

