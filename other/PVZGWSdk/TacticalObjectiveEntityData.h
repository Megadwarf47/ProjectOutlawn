///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class TacticalObjectiveEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TacticalObjectiveEntityData"); }
		virtual ~TacticalObjectiveEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		TacticalObjectiveEntityData() {
			m_team1Timer = 300.f;
			m_team2Timer = 0.f;
		};

		String m_missionSid; // 0x18 (24)
		String m_briefingSidTeam1; // 0x20 (32)
		String m_briefingSidTeam2; // 0x28 (40)
		float m_team1Timer; // 0x30 (48)
		float m_team2Timer; // 0x34 (52)
	}; // 0x38 (56)
}

