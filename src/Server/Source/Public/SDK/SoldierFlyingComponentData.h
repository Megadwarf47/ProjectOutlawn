///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimingConstraintsData.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class ExplosionEntityData;
}

namespace fb {
	class SoldierFlyingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierFlyingComponentData"); }
		virtual ~SoldierFlyingComponentData() override {}
		SoldierFlyingComponentData() {
		};

		Vec3 m_cameraOffset; // 0x70 (112)
		AimingConstraintsData m_aimingConstraints; // 0x80 (128)
		CtrRef<ExplosionEntityData> m_landingImpactExplosion; // 0x90 (144)
	}; // 0xA0 (160)
}

