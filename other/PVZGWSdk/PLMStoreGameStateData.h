///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/PLMGameState.h>
#include <fb/Realm.h>

namespace fb {
	class PLMStoreGameStateData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PLMStoreGameStateData"); }
		virtual ~PLMStoreGameStateData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PLMStoreGameStateData() {
			m_realm = Realm::Realm_Client;
			m_state = PLMGameState::PLMGameState_MenuMain;
		};

		Realm m_realm; // 0x18 (24)
		PLMGameState m_state; // 0x1C (28)
	}; // 0x20 (32)
}

