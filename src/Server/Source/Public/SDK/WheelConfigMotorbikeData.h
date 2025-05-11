///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WheelConfigData.h>

namespace fb {
	class WheelConfigMotorbikeData : public WheelConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WheelConfigMotorbikeData"); }
		virtual ~WheelConfigMotorbikeData() override {}
		WheelConfigMotorbikeData() {
			m_maxSpringForce = 15000.f;
			m_collisionYawDampeningDuration = 0.f;
			m_collisionYawDampening = 0.f;

			m_allowGripSlipTransition = false;
		};

		float m_maxSpringForce; // 0x1A0 (416)
		float m_collisionYawDampeningDuration; // 0x1A4 (420)
		float m_collisionYawDampening; // 0x1A8 (424)
	}; // 0x1B0 (432)
}

