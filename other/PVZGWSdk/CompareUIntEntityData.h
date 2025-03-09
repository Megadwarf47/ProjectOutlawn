///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class CompareUIntEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompareUIntEntityData"); }
		virtual ~CompareUIntEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CompareUIntEntityData() {
			m_realm = Realm::Realm_Server;
			m_a = 0;
			m_b = 0;
			m_triggerOnPropertyChange = false;
			m_triggerOnStart = false;
		};

		Realm m_realm; // 0x18 (24)
		u32 m_a; // 0x1C (28)
		u32 m_b; // 0x20 (32)
		bool m_triggerOnPropertyChange; // 0x24 (36)
		bool m_triggerOnStart; // 0x25 (37)
	}; // 0x28 (40)
}

