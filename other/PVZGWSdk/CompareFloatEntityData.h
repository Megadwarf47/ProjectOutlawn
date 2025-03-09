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
	class CompareFloatEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompareFloatEntityData"); }
		virtual ~CompareFloatEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CompareFloatEntityData() {
			m_realm = Realm::Realm_Server;
			m_a = 0.f;
			m_b = 0.f;
			m_triggerOnPropertyChange = false;
			m_triggerOnStart = false;
		};

		Realm m_realm; // 0x18 (24)
		float m_a; // 0x1C (28)
		float m_b; // 0x20 (32)
		bool m_triggerOnPropertyChange; // 0x24 (36)
		bool m_triggerOnStart; // 0x25 (37)
	}; // 0x28 (40)
}

