///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GhostedProjectileEntityData.h>
#include <fb/RefArray.h>
#include <fb/SoldierDetonationData.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class ExplosionPackTrigger;
}

namespace fb {
	class ExplosionPackEntityData : public GhostedProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExplosionPackEntityData"); }
		virtual ~ExplosionPackEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		ExplosionPackEntityData() {
			m_worldIconOffset = Vec3(0.f, 0.35f, 0.f);
			m_gravityScale = 1.f;
			m_timeToLiveOnPlayerDeath = 0.f;
			m_health = 0.f;
			m_spottedTime = 30.f;
			m_defuseRadius = 2.f;
			m_armingTime = 0.f;
			m_triggeringTime = 0.f;
			m_isDestructible = false;
			m_allowFriendlyDamage = true;
			m_allowDamageGiverChange = true;
			m_receivesExplosionDamage = false;
			m_armWhenFired = false;
			m_destroyOnPlayerRespawn = false;

			m_initialSpeed = 0.f;
			m_isAttachable = true;
			m_forceProxyConvergence = true;
		};

		Vec3 m_worldIconOffset; // 0x130 (304)
		SoldierDetonationData m_soldierDetonationData; // 0x140 (320)
		RefArray<ExplosionPackTrigger> m_explosionPackTriggers; // 0x158 (344)
		float m_gravityScale; // 0x160 (352)
		float m_timeToLiveOnPlayerDeath; // 0x164 (356)
		float m_health; // 0x168 (360)
		float m_spottedTime; // 0x16C (364)
		float m_defuseRadius; // 0x170 (368)
		String m_iconName; // 0x178 (376)
		float m_armingTime; // 0x180 (384)
		float m_triggeringTime; // 0x184 (388)
		bool m_isDestructible; // 0x188 (392)
		bool m_allowFriendlyDamage; // 0x189 (393)
		bool m_allowDamageGiverChange; // 0x18A (394)
		bool m_receivesExplosionDamage; // 0x18B (395)
		bool m_armWhenFired; // 0x18C (396)
		bool m_destroyOnPlayerRespawn; // 0x18D (397)
	}; // 0x190 (400)
}

