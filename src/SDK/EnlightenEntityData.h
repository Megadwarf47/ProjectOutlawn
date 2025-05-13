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
	class EnlightenEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnlightenEntityData"); }
		virtual ~EnlightenEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EnlightenEntityData() {
			m_priority = 0;
			m_realm = Realm::Realm_Client;
			m_enable = false;
		};

		s32 m_priority; // 0x18 (24)
		Realm m_realm; // 0x1C (28)
		bool m_enable; // 0x20 (32)
	}; // 0x28 (40)
}

