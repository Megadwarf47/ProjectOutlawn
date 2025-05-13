///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/String.h>

namespace fb {
	class PVZVehicleStaminaComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZVehicleStaminaComponentData"); }
		virtual ~PVZVehicleStaminaComponentData() override {}
		PVZVehicleStaminaComponentData() {
			m_duration = 0.f;
			m_baseDecayRate = 1.f;
			m_movementDecayRate = 0.f;
		};

		String m_staminaMeterName; // 0x70 (112)
		float m_duration; // 0x78 (120)
		float m_baseDecayRate; // 0x7C (124)
		float m_movementDecayRate; // 0x80 (128)
	}; // 0x90 (144)
}

