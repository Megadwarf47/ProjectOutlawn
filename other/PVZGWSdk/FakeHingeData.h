///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/FakePhysicsData.h>
#include <fb/Vec3.h>

namespace fb {
	class FakeHingeData : public FakePhysicsData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FakeHingeData"); }
		virtual ~FakeHingeData() override {}
		FakeHingeData() {
			m_minAngle = 0.f;
			m_maxAngle = 360.f;
			m_angularDampening = 0.05f;
			m_pullbackAcceleration = 0.f;
			m_progressiveExponent = 0.f;
			m_inertiaModifier = 1.f;
		};

		float m_minAngle; // 0x38 (56)
		float m_maxAngle; // 0x3C (60)
		Vec3 m_pivot; // 0x40 (64)
		Vec3 m_rotationAxis; // 0x50 (80)
		Vec3 m_extensionAxis; // 0x60 (96)
		float m_angularDampening; // 0x70 (112)
		float m_pullbackAcceleration; // 0x74 (116)
		float m_progressiveExponent; // 0x78 (120)
		float m_inertiaModifier; // 0x7C (124)
	}; // 0x80 (128)
}

