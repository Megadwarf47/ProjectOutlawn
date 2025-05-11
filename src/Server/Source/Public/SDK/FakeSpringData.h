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
	class FakeSpringData : public FakePhysicsData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FakeSpringData"); }
		virtual ~FakeSpringData() override {}
		FakeSpringData() {
			m_length = 0.f;
			m_acceleration = 0.f;
			m_progressiveExponent = 0.f;
			m_damping = 0.f;
		};

		float m_length; // 0x38 (56)
		float m_acceleration; // 0x3C (60)
		Vec3 m_direction; // 0x40 (64)
		float m_progressiveExponent; // 0x50 (80)
		float m_damping; // 0x54 (84)
	}; // 0x60 (96)
}

