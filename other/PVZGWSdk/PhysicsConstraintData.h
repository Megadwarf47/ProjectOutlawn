///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>

namespace fb {
	class PhysicsConstraintData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsConstraintData"); }
		virtual ~PhysicsConstraintData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PhysicsConstraintData() {
			m_breakThreshold = 200.f;
			m_realm = Realm::Realm_ClientAndServer;
			m_isBreakable = false;
			m_stabilized = true;
			m_enableContinuousSimulation = false;
		};

		float m_breakThreshold; // 0x18 (24)
		LinearTransform m_transform; // 0x20 (32)
		Realm m_realm; // 0x60 (96)
		bool m_isBreakable; // 0x64 (100)
		bool m_stabilized; // 0x65 (101)
		bool m_enableContinuousSimulation; // 0x66 (102)
	}; // 0x70 (112)
}

