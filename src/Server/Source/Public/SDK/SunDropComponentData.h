///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/SunDropProjectile.h>

namespace fb {
	class WeaponUnlockAsset;
}

namespace fb {
	class SunDropComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SunDropComponentData"); }
		virtual ~SunDropComponentData() override {}
		SunDropComponentData() {
			m_sunDropSpawnRate = 10.f;
			m_sunDropSpawnSpeed = 2.5f;
			m_spawnProjectileAtIndex = 0;
			m_isHealingInterest = true;
			m_spawnSunDropOnInit = true;
			m_spawnSunDropOnTimer = true;
			m_allowDropAfterDeath = false;
			m_spawnRandomProjectile = false;
		};

		float m_sunDropSpawnRate; // 0x70 (112)
		float m_sunDropSpawnSpeed; // 0x74 (116)
		Array<SunDropProjectile> m_projectiles; // 0x78 (120)
		s32 m_spawnProjectileAtIndex; // 0x80 (128)
		CtrRef<WeaponUnlockAsset> m_weaponUnlockAsset; // 0x88 (136)
		bool m_isHealingInterest; // 0x90 (144)
		bool m_spawnSunDropOnInit; // 0x91 (145)
		bool m_spawnSunDropOnTimer; // 0x92 (146)
		bool m_allowDropAfterDeath; // 0x93 (147)
		bool m_spawnRandomProjectile; // 0x94 (148)
	}; // 0xA0 (160)
}

