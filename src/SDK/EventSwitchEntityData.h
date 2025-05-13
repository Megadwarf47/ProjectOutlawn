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
	class EventSwitchEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventSwitchEntityData"); }
		virtual ~EventSwitchEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EventSwitchEntityData() {
			m_realm = Realm::Realm_Server;
			m_outEvents = 0;
			m_autoIncrement = false;
		};

		Realm m_realm; // 0x18 (24)
		u32 m_outEvents; // 0x1C (28)
		bool m_autoIncrement; // 0x20 (32)
	}; // 0x28 (40)
}

