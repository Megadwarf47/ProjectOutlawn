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
	class ConsoleCommandTriggerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConsoleCommandTriggerEntityData"); }
		virtual ~ConsoleCommandTriggerEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ConsoleCommandTriggerEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
		};

		String m_commandName; // 0x18 (24)
		Realm m_realm; // 0x20 (32)
	}; // 0x28 (40)
}

