///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsConstraintData.h>

namespace fb {
	class PhysicsHingeConstraintData : public PhysicsConstraintData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsHingeConstraintData"); }
		virtual ~PhysicsHingeConstraintData() override {}
		PhysicsHingeConstraintData() {
			m_minAngle = -45.f;
			m_maxAngle = 45.f;
			m_angularFriction = 0.f;
			m_angularStiffness = 1.f;
			m_hasLimits = false;
		};

		float m_minAngle; // 0x70 (112)
		float m_maxAngle; // 0x74 (116)
		float m_angularFriction; // 0x78 (120)
		float m_angularStiffness; // 0x7C (124)
		bool m_hasLimits; // 0x80 (128)
	}; // 0x90 (144)
}

