///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsConstraintData.h>

namespace fb {
	class PhysicsRagdollContraintData : public PhysicsConstraintData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsRagdollContraintData"); }
		virtual ~PhysicsRagdollContraintData() override {}
		PhysicsRagdollContraintData() {
			m_twistMinAngularLimit = -45.f;
			m_twistMaxAngularLimit = 45.f;
			m_planeMinAngularLimit = -45.f;
			m_planeMaxAngularLimit = 45.f;
			m_coneAngularLimit = 45.f;
			m_angularFriction = 0.f;
			m_angularStiffness = 1.f;
			m_hasLimits = false;
		};

		float m_twistMinAngularLimit; // 0x70 (112)
		float m_twistMaxAngularLimit; // 0x74 (116)
		float m_planeMinAngularLimit; // 0x78 (120)
		float m_planeMaxAngularLimit; // 0x7C (124)
		float m_coneAngularLimit; // 0x80 (128)
		float m_angularFriction; // 0x84 (132)
		float m_angularStiffness; // 0x88 (136)
		bool m_hasLimits; // 0x8C (140)
	}; // 0x90 (144)
}

