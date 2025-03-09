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
	class TeamFilterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamFilterEntityData"); }
		virtual ~TeamFilterEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TeamFilterEntityData() {
			m_realm = Realm::Realm_Server;
			m_team = TeamId::Team1;
			m_invertFilter = false;
			m_generateEventForEveryMatchingTeamMember = false;
		};

		Realm m_realm; // 0x18 (24)
		TeamId m_team; // 0x1C (28)
		bool m_invertFilter; // 0x20 (32)
		bool m_generateEventForEveryMatchingTeamMember; // 0x21 (33)
	}; // 0x28 (40)
}

