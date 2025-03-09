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
	class DelayEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DelayEntityData"); }
		virtual ~DelayEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DelayEntityData() {
			m_delay = 0.f;
			m_realm = Realm::Realm_Client;
			m_autoStart = false;
			m_runOnce = false;
			m_removeDuplicateEvents = true;
		};

		float m_delay; // 0x18 (24)
		Realm m_realm; // 0x1C (28)
		bool m_autoStart; // 0x20 (32)
		bool m_runOnce; // 0x21 (33)
		bool m_removeDuplicateEvents; // 0x22 (34)
	}; // 0x28 (40)
}

