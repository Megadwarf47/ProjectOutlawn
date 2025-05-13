///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ProjectileEntityData.h>

namespace fb {
	class VehicleBlueprint;
}

namespace fb {
	class VehicleProjectileEntityData : public ProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleProjectileEntityData"); }
		virtual ~VehicleProjectileEntityData() override {}
		VehicleProjectileEntityData() {
			m_enterDelay = 0.f;
			m_alignWithGroundRayLength = 5.f;
			m_noVehicleCollisionTime = 0.f;
			m_autoEnter = true;
			m_alignWithGround = true;
			m_checkGroundWhenSpawned = false;
			m_deployInsideNeutralCombatAreaOnly = false;
		};

		CtrRef<VehicleBlueprint> m_vehicle; // 0xE0 (224)
		float m_enterDelay; // 0xE8 (232)
		float m_alignWithGroundRayLength; // 0xEC (236)
		float m_noVehicleCollisionTime; // 0xF0 (240)
		bool m_autoEnter; // 0xF4 (244)
		bool m_alignWithGround; // 0xF5 (245)
		bool m_checkGroundWhenSpawned; // 0xF6 (246)
		bool m_deployInsideNeutralCombatAreaOnly; // 0xF7 (247)
	}; // 0x100 (256)
}

