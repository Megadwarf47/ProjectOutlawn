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
	class BoolToEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoolToEventEntityData"); }
		virtual ~BoolToEventEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		BoolToEventEntityData() {
			m_realm = Realm::Realm_Server;
			m_value = false;
			m_initalEvent = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_value; // 0x1C (28)
		bool m_initalEvent; // 0x1D (29)
	}; // 0x20 (32)
}

