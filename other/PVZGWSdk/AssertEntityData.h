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
	class AssertEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AssertEntityData"); }
		virtual ~AssertEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AssertEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_pass = true;
			m_triggerOnce = false;
			m_triggerOnPassChanged = true;
		};

		Realm m_realm; // 0x18 (24)
		String m_text; // 0x20 (32)
		bool m_pass; // 0x28 (40)
		bool m_triggerOnce; // 0x29 (41)
		bool m_triggerOnPassChanged; // 0x2A (42)
	}; // 0x30 (48)
}

