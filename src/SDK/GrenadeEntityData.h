///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GhostedProjectileEntityData.h>
#include <fb/GrenadeType.h>
#include <fb/String.h>

namespace fb {
	class GrenadeEntityData : public GhostedProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GrenadeEntityData"); }
		virtual ~GrenadeEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		GrenadeEntityData() {
			m_gravity = -9.8f;
			m_collisionSpeedMultiplier = 0.3f;
			m_minBounceSpeed = 2.f;
			m_collisionDamage = 0.f;
			m_grenadeType = GrenadeType::GrenadeType_NotSet;
			m_radius = 0.f;
			m_showHudIndicator = true;

			m_detonateOnTimeout = true;
		};

		float m_gravity; // 0x130 (304)
		float m_collisionSpeedMultiplier; // 0x134 (308)
		float m_minBounceSpeed; // 0x138 (312)
		float m_collisionDamage; // 0x13C (316)
		GrenadeType m_grenadeType; // 0x140 (320)
		float m_radius; // 0x144 (324)
		String m_hudIndicatorIcon; // 0x148 (328)
		bool m_showHudIndicator; // 0x150 (336)
	}; // 0x160 (352)
}

