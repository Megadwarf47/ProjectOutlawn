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
	class TeamEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamEventEntityData"); }
		virtual ~TeamEventEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TeamEventEntityData() {
			m_realm = Realm::Realm_Server;
			m_team = TeamId::Team1;
			m_invertLogic = false;
		};

		Realm m_realm; // 0x18 (24)
		TeamId m_team; // 0x1C (28)
		bool m_invertLogic; // 0x20 (32)
	}; // 0x28 (40)
}

