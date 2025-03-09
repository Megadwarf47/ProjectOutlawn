///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LocalPlayerIndex.h>
#include <fb/Realm.h>

namespace fb {
	class LocalPlayerEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalPlayerEventEntityData"); }
		virtual ~LocalPlayerEventEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		LocalPlayerEventEntityData() {
			m_realm = Realm::Realm_Client;
			m_localPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_Invalid;
			m_allLocalPlayers = false;
		};

		Realm m_realm; // 0x18 (24)
		LocalPlayerIndex m_localPlayerIndex; // 0x1C (28)
		bool m_allLocalPlayers; // 0x20 (32)
	}; // 0x28 (40)
}

