///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/SubRealm.h>

namespace fb {
	class PlayerFilterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerFilterEntityData"); }
		virtual ~PlayerFilterEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PlayerFilterEntityData() {
			m_realm = Realm::Realm_Server;
			m_subRealm = SubRealm::SubRealm_LocalPlayer;
			m_invertFilter = false;
			m_forwardToSpectators = false;
		};

		Realm m_realm; // 0x18 (24)
		SubRealm m_subRealm; // 0x1C (28)
		bool m_invertFilter; // 0x20 (32)
		bool m_forwardToSpectators; // 0x21 (33)
	}; // 0x28 (40)
}

