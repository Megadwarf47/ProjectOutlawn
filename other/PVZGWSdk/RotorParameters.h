///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/Vec2.h>

namespace fb {
	class RotorParameters : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RotorParameters"); }
		virtual ~RotorParameters() override {}
		RotorParameters() {
			m_cyclicInputScaleRoll = 0.2f;
			m_cyclicInputScalePitch = 0.2f;
			m_collectiveThrottleInputScale = 1.1f;
			m_collectiveBrakeInputScale = 1.1f;
			m_collectiveInputIdle = 0.9f;
			m_horizontalForceModifier = 1.f;
			m_cyclicFadeOutOffset = 0.25f;
			m_additionalGravityModifier = 8.f;
			m_horisontalMinEffectVelocity = 20.f;
			m_horisontalMinEffectMod = 0.2f;
			m_reverseThrottle = false;
			m_enableHorisontalMinEffect = false;
		};

		float m_cyclicInputScaleRoll; // 0x10 (16)
		float m_cyclicInputScalePitch; // 0x14 (20)
		float m_collectiveThrottleInputScale; // 0x18 (24)
		float m_collectiveBrakeInputScale; // 0x1C (28)
		float m_collectiveInputIdle; // 0x20 (32)
		float m_horizontalForceModifier; // 0x24 (36)
		Array<Vec2> m_angleOfAttack; // 0x28 (40)
		float m_cyclicFadeOutOffset; // 0x30 (48)
		float m_additionalGravityModifier; // 0x34 (52)
		float m_horisontalMinEffectVelocity; // 0x38 (56)
		float m_horisontalMinEffectMod; // 0x3C (60)
		bool m_reverseThrottle; // 0x40 (64)
		bool m_enableHorisontalMinEffect; // 0x41 (65)
	}; // 0x48 (72)
}

