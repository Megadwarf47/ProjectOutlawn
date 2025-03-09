///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/String.h>

namespace fb {
	class JointValidationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("JointValidationEntityData"); }
		virtual ~JointValidationEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		JointValidationEntityData() {
			m_realm = Realm::Realm_Client;
			m_joint_X = 0.f;
			m_joint_Y = 0.f;
			m_joint_Z = 0.f;
			m_tolerance = 0.01f;
			m_tick = 1000.f;
			m_disableValidation = true;
		};

		Realm m_realm; // 0x18 (24)
		String m_jointName; // 0x20 (32)
		float m_joint_X; // 0x28 (40)
		float m_joint_Y; // 0x2C (44)
		float m_joint_Z; // 0x30 (48)
		float m_tolerance; // 0x34 (52)
		float m_tick; // 0x38 (56)
		bool m_disableValidation; // 0x3C (60)
	}; // 0x40 (64)
}

