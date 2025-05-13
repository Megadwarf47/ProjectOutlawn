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
#include <fb/SelectFloatInput.h>

namespace fb {
	class SelectFloatEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SelectFloatEntityData"); }
		virtual ~SelectFloatEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SelectFloatEntityData() {
			m_realm = Realm::Realm_Server;
		};

		Realm m_realm; // 0x18 (24)
		Array<SelectFloatInput> m_events; // 0x20 (32)
	}; // 0x28 (40)
}

