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
	class UniqueIdEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UniqueIdEntityData"); }
		virtual ~UniqueIdEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		UniqueIdEntityData() {
			m_realm = Realm::Realm_Server;
		};

		Realm m_realm; // 0x18 (24)
	}; // 0x20 (32)
}

