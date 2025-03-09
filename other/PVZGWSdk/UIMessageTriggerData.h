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
	class UIMessageTriggerData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMessageTriggerData"); }
		virtual ~UIMessageTriggerData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		UIMessageTriggerData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
	}; // 0x20 (32)
}

