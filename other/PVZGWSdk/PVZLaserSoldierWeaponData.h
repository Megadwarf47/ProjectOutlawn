///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameplayBones.h>
#include <fb/PVZSoldierWeaponData.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class PVZLaserSoldierWeaponData : public PVZSoldierWeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZLaserSoldierWeaponData"); }
		virtual ~PVZLaserSoldierWeaponData() override {}
		PVZLaserSoldierWeaponData() {
			m_laserTargetInterpolationTime = 0.f;
			m_clientVisualProjectileSpawnBone = GameplayBones::GameplayBones_UndefinedBone;
		};

		Vec3 m_beamOffset; // 0x240 (576)
		float m_laserTargetInterpolationTime; // 0x250 (592)
		CtrRef<EffectBlueprint> m_beamImpactEffect; // 0x258 (600)
		GameplayBones m_clientVisualProjectileSpawnBone; // 0x260 (608)
	}; // 0x270 (624)
}

