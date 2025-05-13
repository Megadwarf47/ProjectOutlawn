///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExplosionPackTrigger.h>

namespace fb {
	class ExplosionPackVehicleRayTrigger : public ExplosionPackTrigger {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExplosionPackVehicleRayTrigger"); }
		virtual ~ExplosionPackVehicleRayTrigger() override {}
		ExplosionPackVehicleRayTrigger() {
			m_activationDelay = 0.f;
			m_distance = 10.f;
		};

		float m_activationDelay; // 0x10 (16)
		float m_distance; // 0x14 (20)
	}; // 0x18 (24)
}

