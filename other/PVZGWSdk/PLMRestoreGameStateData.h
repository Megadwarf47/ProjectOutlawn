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
	class PLMRestoreGameStateData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PLMRestoreGameStateData"); }
		virtual ~PLMRestoreGameStateData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PLMRestoreGameStateData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
	}; // 0x20 (32)
}

