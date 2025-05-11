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
	class EventAndGateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventAndGateEntityData"); }
		virtual ~EventAndGateEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EventAndGateEntityData() {
			m_realm = Realm::Realm_Server;
			m_eventCount = 2;
		};

		Realm m_realm; // 0x18 (24)
		u32 m_eventCount; // 0x1C (28)
	}; // 0x20 (32)
}

