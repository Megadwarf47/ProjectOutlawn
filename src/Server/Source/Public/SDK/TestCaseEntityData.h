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
	class TestCaseEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TestCaseEntityData"); }
		virtual ~TestCaseEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TestCaseEntityData() {
			m_realm = Realm::Realm_Server;
			m_timeOut = 10.f;
			m_enabled = true;
			m_stable = true;
		};

		Realm m_realm; // 0x18 (24)
		float m_timeOut; // 0x1C (28)
		String m_testGroup; // 0x20 (32)
		String m_testCaseName; // 0x28 (40)
		bool m_enabled; // 0x30 (48)
		bool m_stable; // 0x31 (49)
	}; // 0x38 (56)
}

