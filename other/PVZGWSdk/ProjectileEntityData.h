///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntHitReactionWeaponType.h>
#include <fb/CtrRef.h>
#include <fb/GamePhysicsEntityData.h>
#include <fb/MaterialDecl.h>
#include <fb/String.h>

namespace fb {
	class ExplosionEntityData;
	class WeaponSuppressionData;
}

namespace fb {
	class ProjectileEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProjectileEntityData"); }
		virtual ~ProjectileEntityData() override {}
		ProjectileEntityData() {
			m_initialSpeed = 350.f;
			m_timeToLive = 0.f;
			m_maxCount = 0;
			m_maxCountCoolDownTime = 0.f;
			m_initMeshHideTime = 0.f;
			m_visualConvergeDistance = 30.f;
			m_visualConvergenceDelay = 0.1f;
			m_visualConvergenceDuration = 0.1f;
			m_proxyVisualConvergenceDelay = -1.f;
			m_proxyVisualConvergenceDuration = -1.f;
			m_hitReactionWeaponType = AntHitReactionWeaponType::AntHitReactionWeaponType_AssaultRifle;
			m_detonateOnTimeout = false;
			m_serverProjectileDisabled = false;
		};

		float m_initialSpeed; // 0x90 (144)
		float m_timeToLive; // 0x94 (148)
		u32 m_maxCount; // 0x98 (152)
		float m_maxCountCoolDownTime; // 0x9C (156)
		float m_initMeshHideTime; // 0xA0 (160)
		float m_visualConvergeDistance; // 0xA4 (164)
		float m_visualConvergenceDelay; // 0xA8 (168)
		float m_visualConvergenceDuration; // 0xAC (172)
		float m_proxyVisualConvergenceDelay; // 0xB0 (176)
		float m_proxyVisualConvergenceDuration; // 0xB4 (180)
		CtrRef<ExplosionEntityData> m_explosion; // 0xB8 (184)
		CtrRef<WeaponSuppressionData> m_suppressionData; // 0xC0 (192)
		String m_ammunitionType; // 0xC8 (200)
		MaterialDecl m_materialPair; // 0xD0 (208)
		AntHitReactionWeaponType m_hitReactionWeaponType; // 0xD4 (212)
		bool m_detonateOnTimeout; // 0xD8 (216)
		bool m_serverProjectileDisabled; // 0xD9 (217)
	}; // 0xE0 (224)
}

