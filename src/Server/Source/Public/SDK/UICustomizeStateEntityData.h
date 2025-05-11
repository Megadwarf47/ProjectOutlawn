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
	class UICustomizeStateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizeStateEntityData"); }
		virtual ~UICustomizeStateEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		UICustomizeStateEntityData() {
			m_realm = Realm::Realm_Client;
			m_nextState = 0;
			m_nextTab = 0;
			m_nextSlot = 0;
			m_targetState = 0;
			m_selectedItemId = 0;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_nextState; // 0x1C (28)
		s32 m_nextTab; // 0x20 (32)
		s32 m_nextSlot; // 0x24 (36)
		s32 m_targetState; // 0x28 (40)
		s32 m_selectedItemId; // 0x2C (44)
	}; // 0x30 (48)
}

