///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/TeamId.h>

namespace fb {
	class PlayerIteratorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerIteratorEntityData"); }
		virtual ~PlayerIteratorEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PlayerIteratorEntityData() {
			m_realm = Realm::Realm_Server;
			m_team = TeamId::TeamNeutral;
			m_alive = true;
			m_skipHuman = false;
			m_skipAI = false;
			m_randomizeFromStart = false;
		};

		Realm m_realm; // 0x18 (24)
		TeamId m_team; // 0x1C (28)
		bool m_alive; // 0x20 (32)
		bool m_skipHuman; // 0x21 (33)
		bool m_skipAI; // 0x22 (34)
		bool m_randomizeFromStart; // 0x23 (35)
	}; // 0x28 (40)
}

