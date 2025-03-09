///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/InitialDirectionScaleByPitchData.h>
#include <fb/InitialSpeedScaleByPitchData.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	class ExplosionEntityData;
	class ProjectileBlueprint;
	class ProjectileEntityData;
}

namespace fb {
	struct ShotConfigData {
		ShotConfigData() {
			m_initialDirection = Vec3(0.f, 0.f, 1.f);
			m_initialSpeed = Vec3(0.f, 0.f, 350.f);
			m_raycastDistance = 400.f;
			m_inheritWeaponSpeedAmount = 0.f;
			m_spawnDelay = 0.f;
			m_numberOfBulletsPerShell = 1;
			m_numberOfBulletsPerShot = 1;
			m_numberOfBulletsPerBurst = 3;
			m_weaponHitDistanceMinimum = 7.f;
			m_weaponRaycastVerticalOffset = 0.f;
			m_weaponWallTestDist = 0.f;
			m_forceSpawnToCamera = false;
			m_spawnVisualAtWeaponBone = false;
			m_activeForceSpawnToCamera = true;
		};

		Vec3 m_initialPosition; // 0x0 (0)
		Vec3 m_initialDirection; // 0x10 (16)
		Vec3 m_initialSpeed; // 0x20 (32)
		Array<InitialDirectionScaleByPitchData> m_initialDirectionScaleByPitch; // 0x30 (48)
		Array<InitialSpeedScaleByPitchData> m_initialSpeedScaleByPitch; // 0x38 (56)
		float m_raycastDistance; // 0x40 (64)
		float m_inheritWeaponSpeedAmount; // 0x44 (68)
		CtrRef<ExplosionEntityData> m_muzzleExplosion; // 0x48 (72)
		CtrRef<ProjectileEntityData> m_projectileData; // 0x50 (80)
		CtrRef<ProjectileEntityData> m_secondaryProjectileData; // 0x58 (88)
		CtrRef<ProjectileBlueprint> m_projectile; // 0x60 (96)
		CtrRef<ProjectileBlueprint> m_secondaryProjectile; // 0x68 (104)
		float m_spawnDelay; // 0x70 (112)
		u32 m_numberOfBulletsPerShell; // 0x74 (116)
		u32 m_numberOfBulletsPerShot; // 0x78 (120)
		u32 m_numberOfBulletsPerBurst; // 0x7C (124)
		float m_weaponHitDistanceMinimum; // 0x80 (128)
		float m_weaponRaycastVerticalOffset; // 0x84 (132)
		float m_weaponWallTestDist; // 0x88 (136)
		bool m_forceSpawnToCamera; // 0x8C (140)
		bool m_spawnVisualAtWeaponBone; // 0x8D (141)
		bool m_activeForceSpawnToCamera; // 0x8E (142)
	}; // 0x90 (144)
}

