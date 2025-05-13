///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameplayBones.h>
#include <fb/Vec3.h>
#include <fb/WeaponData.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class PVZLaserWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZLaserWeaponData"); }
		virtual ~PVZLaserWeaponData() override {}
		PVZLaserWeaponData() {
			m_laserTargetInterpolationTime = 0.f;
			m_clientVisualProjectileSpawnBone = GameplayBones::GameplayBones_UndefinedBone;
		};

		Vec3 m_beamOffset; // 0x20 (32)
		CtrRef<EffectBlueprint> m_beamEffect; // 0x30 (48)
		CtrRef<EffectBlueprint> m_beamImpactEffect; // 0x38 (56)
		float m_laserTargetInterpolationTime; // 0x40 (64)
		GameplayBones m_clientVisualProjectileSpawnBone; // 0x44 (68)
	}; // 0x50 (80)
}

