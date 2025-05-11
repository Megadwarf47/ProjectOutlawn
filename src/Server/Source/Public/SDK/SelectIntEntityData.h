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
#include <fb/SelectIntInput.h>

namespace fb {
	class SelectIntEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SelectIntEntityData"); }
		virtual ~SelectIntEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SelectIntEntityData() {
			m_realm = Realm::Realm_Server;
		};

		Realm m_realm; // 0x18 (24)
		Array<SelectIntInput> m_events; // 0x20 (32)
	}; // 0x28 (40)
}

