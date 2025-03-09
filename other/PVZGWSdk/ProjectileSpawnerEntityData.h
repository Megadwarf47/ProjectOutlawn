///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class ProjectileBlueprint;
	class WeaponUnlockAsset;
}

namespace fb {
	class ProjectileSpawnerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProjectileSpawnerEntityData"); }
		virtual ~ProjectileSpawnerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		ProjectileSpawnerEntityData() {
			m_spawnRate = 10.f;
			m_spawnSpeed = 2.5f;
			m_spawnOnInit = true;
			m_spawnOnTimer = true;
		};

		float m_spawnRate; // 0x60 (96)
		float m_spawnSpeed; // 0x64 (100)
		CtrRef<ProjectileBlueprint> m_projectile; // 0x68 (104)
		CtrRef<WeaponUnlockAsset> m_weaponUnlockAsset; // 0x70 (112)
		bool m_spawnOnInit; // 0x78 (120)
		bool m_spawnOnTimer; // 0x79 (121)
	}; // 0x80 (128)
}

