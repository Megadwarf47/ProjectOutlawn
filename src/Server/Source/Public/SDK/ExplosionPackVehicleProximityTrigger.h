///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExplosionPackTrigger.h>

namespace fb {
	class ExplosionPackVehicleProximityTrigger : public ExplosionPackTrigger {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExplosionPackVehicleProximityTrigger"); }
		virtual ~ExplosionPackVehicleProximityTrigger() override {}
		ExplosionPackVehicleProximityTrigger() {
			m_activationDelay = 0.f;
			m_radius = 5.f;
		};

		float m_activationDelay; // 0x10 (16)
		float m_radius; // 0x14 (20)
	}; // 0x18 (24)
}

