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
	class FakePhysicsData;
}

namespace fb {
	class FakePhysicsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FakePhysicsData"); }
		virtual ~FakePhysicsData() override {}
		FakePhysicsData() {
			m_startSpeed = 0.f;
			m_gravityModifier = 1.f;
			m_startDampening = 0.f;
			m_endDampening = 0.f;
			m_minSpeed = 0.f;
			m_maxSpeed = 0.f;
			m_mass = 1.f;
		};

		CtrRef<FakePhysicsData> m_childFakePhysics; // 0x10 (16)
		float m_startSpeed; // 0x18 (24)
		float m_gravityModifier; // 0x1C (28)
		float m_startDampening; // 0x20 (32)
		float m_endDampening; // 0x24 (36)
		float m_minSpeed; // 0x28 (40)
		float m_maxSpeed; // 0x2C (44)
		float m_mass; // 0x30 (48)
	}; // 0x38 (56)
}

