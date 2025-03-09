///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class SwitchPropertyStringEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SwitchPropertyStringEntityData"); }
		virtual ~SwitchPropertyStringEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SwitchPropertyStringEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Array<String> m_stringProperties; // 0x18 (24)
		Realm m_realm; // 0x20 (32)
	}; // 0x28 (40)
}

