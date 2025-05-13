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
	class EventGateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventGateEntityData"); }
		virtual ~EventGateEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EventGateEntityData() {
			m_realm = Realm::Realm_Server;
			m_default = true;
			m_autoClose = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_default; // 0x1C (28)
		bool m_autoClose; // 0x1D (29)
	}; // 0x20 (32)
}

