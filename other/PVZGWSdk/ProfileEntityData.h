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
	class ProfileEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileEntityData"); }
		virtual ~ProfileEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ProfileEntityData() {
			m_realm = Realm::Realm_Server;
		};

		Realm m_realm; // 0x18 (24)
		String m_profileName; // 0x20 (32)
	}; // 0x28 (40)
}

