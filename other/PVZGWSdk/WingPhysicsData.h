///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class Curve2D;
	class LandingFlapData;
}

namespace fb {
	class WingPhysicsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WingPhysicsData"); }
		virtual ~WingPhysicsData() override {}
		WingPhysicsData() {
			m_lift = 10.f;
			m_flapLift = 1.f;
			m_drag = 0.f;
			m_flapDrag = 0.f;
			m_angularVelocityLiftModifier = 0.f;
			m_dragRotationModifier = 1.f;
			m_baseAngleOfAttack = 0.f;
			m_inputForFlap = 0;
			m_flapTurnSpeed = 1.f;
			m_visualFlapTurnSpeed = 1.f;
			m_visualFlapAngleLimit = 90.f;
			m_landingFlapLift = 0.f;
		};

		float m_lift; // 0x10 (16)
		float m_flapLift; // 0x14 (20)
		CtrRef<Curve2D> m_liftCoefficient; // 0x18 (24)
		float m_drag; // 0x20 (32)
		float m_flapDrag; // 0x24 (36)
		CtrRef<Curve2D> m_dragCoefficient; // 0x28 (40)
		float m_angularVelocityLiftModifier; // 0x30 (48)
		float m_dragRotationModifier; // 0x34 (52)
		float m_baseAngleOfAttack; // 0x38 (56)
		s32 m_inputForFlap; // 0x3C (60)
		float m_flapTurnSpeed; // 0x40 (64)
		float m_visualFlapTurnSpeed; // 0x44 (68)
		float m_visualFlapAngleLimit; // 0x48 (72)
		CtrRef<Curve2D> m_maxFlapAngleScaleFactor; // 0x50 (80)
		float m_landingFlapLift; // 0x58 (88)
		CtrRef<LandingFlapData> m_landingFlapLogic; // 0x60 (96)
	}; // 0x68 (104)
}

