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
	class NotEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NotEntityData"); }
		virtual ~NotEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		NotEntityData() {
			m_realm = Realm::Realm_Client;
			m_in = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_in; // 0x1C (28)
	}; // 0x20 (32)
}

