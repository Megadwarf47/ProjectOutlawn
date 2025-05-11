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
	class SelectEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SelectEventEntityData"); }
		virtual ~SelectEventEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SelectEventEntityData() {
			m_realm = Realm::Realm_Server;
			m_selected = 0;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_selected; // 0x1C (28)
		Array<String> m_events; // 0x20 (32)
	}; // 0x28 (40)
}

