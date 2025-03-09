///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>
#include <fb/String.h>

namespace fb {
	class DamageToVehicleEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DamageToVehicleEvent"); }
		virtual ~DamageToVehicleEvent() override {}
		DamageToVehicleEvent() {
			m_damageAmount = 0.f;
		};

		String m_vehicleName; // 0x18 (24)
		String m_weaponName; // 0x20 (32)
		float m_damageAmount; // 0x28 (40)
	}; // 0x30 (48)
}

