///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class ParachuteStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ParachuteStateData"); }
		virtual ~ParachuteStateData() override {}
		ParachuteStateData() {
			m_deployTime = 1.f;
			m_terminalVelocity = 8.f;
			m_forwardDragCoefficient = 0.025f;
			m_angleOfAttack = 22.5f;
			m_bankOffset = 0.25f;
			m_throttleOffset = 1.f;
			m_brakeOffset = 1.f;
			m_maxRollVelocity = 20.f;
			m_maxPitchVelocity = 45.f;
			m_maxYawVelocity = 50.f;
		};

		float m_deployTime; // 0x18 (24)
		float m_terminalVelocity; // 0x1C (28)
		float m_forwardDragCoefficient; // 0x20 (32)
		float m_angleOfAttack; // 0x24 (36)
		float m_bankOffset; // 0x28 (40)
		float m_throttleOffset; // 0x2C (44)
		float m_brakeOffset; // 0x30 (48)
		float m_maxRollVelocity; // 0x34 (52)
		float m_maxPitchVelocity; // 0x38 (56)
		float m_maxYawVelocity; // 0x3C (60)
	}; // 0x40 (64)
}

