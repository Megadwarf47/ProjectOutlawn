///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>
#include <fb/Vec4.h>

namespace fb {
	class FlyingStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FlyingStateData"); }
		virtual ~FlyingStateData() override {}
		FlyingStateData() {
			m_forwardForce = 0.f;
			m_bleedOffCurve = Vec4(0.f, 0.f, -1.f, 2.f);
			m_bleedOffTime = 3.f;
			m_terminalVelocity = 20.f;
			m_maxVelocity = -1.f;
			m_maxLandingVelocity = 5.f;
			m_gravityScale = 1.f;
			m_pitchControlMultiplier = 1.f;
		};

		float m_forwardForce; // 0x18 (24)
		Vec4 m_bleedOffCurve; // 0x20 (32)
		float m_bleedOffTime; // 0x30 (48)
		float m_terminalVelocity; // 0x34 (52)
		float m_maxVelocity; // 0x38 (56)
		float m_maxLandingVelocity; // 0x3C (60)
		float m_gravityScale; // 0x40 (64)
		float m_pitchControlMultiplier; // 0x44 (68)
	}; // 0x50 (80)
}

