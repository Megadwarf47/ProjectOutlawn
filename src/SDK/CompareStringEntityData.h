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
	class CompareStringEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompareStringEntityData"); }
		virtual ~CompareStringEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CompareStringEntityData() {
			m_realm = Realm::Realm_Server;
			m_triggerOnPropertyChange = false;
			m_triggerOnStart = false;
		};

		Realm m_realm; // 0x18 (24)
		String m_a; // 0x20 (32)
		String m_b; // 0x28 (40)
		bool m_triggerOnPropertyChange; // 0x30 (48)
		bool m_triggerOnStart; // 0x31 (49)
	}; // 0x38 (56)
}

