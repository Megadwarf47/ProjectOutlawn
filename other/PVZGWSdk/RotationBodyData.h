///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MovingBodyData.h>

namespace fb {
	class ExtendedConstraintsData;
}

namespace fb {
	class RotationBodyData : public MovingBodyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RotationBodyData"); }
		virtual ~RotationBodyData() override {}
		RotationBodyData() {
			m_angularMomentumMultiplier = 1.f;
			m_angularMomentumThreshold = 0.f;
			m_angularMomentumDamping = 0.f;
			m_angularMomentumDampingAcc = 0.f;
			m_angularMomentumDampingDeacc = -1.f;
			m_angularConstraintMin = 0.f;
			m_angularConstraintMax = 0.f;
			m_rotationAxis = 0;
			m_usePostSatisfyConstraints = true;
			m_useAngularMomentumThreshold = false;
			m_useAngularMomentumDamping = false;
			m_useAngularConstraint = false;
		};

		float m_angularMomentumMultiplier; // 0x18 (24)
		float m_angularMomentumThreshold; // 0x1C (28)
		float m_angularMomentumDamping; // 0x20 (32)
		float m_angularMomentumDampingAcc; // 0x24 (36)
		float m_angularMomentumDampingDeacc; // 0x28 (40)
		float m_angularConstraintMin; // 0x2C (44)
		float m_angularConstraintMax; // 0x30 (48)
		s32 m_rotationAxis; // 0x34 (52)
		CtrRef<ExtendedConstraintsData> m_extendedConstraints; // 0x38 (56)
		bool m_usePostSatisfyConstraints; // 0x40 (64)
		bool m_useAngularMomentumThreshold; // 0x41 (65)
		bool m_useAngularMomentumDamping; // 0x42 (66)
		bool m_useAngularConstraint; // 0x43 (67)
	}; // 0x48 (72)
}

