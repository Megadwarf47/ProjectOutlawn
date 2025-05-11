///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class CharacterInVehicleScenarioEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterInVehicleScenarioEntityData"); }
		virtual ~CharacterInVehicleScenarioEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CharacterInVehicleScenarioEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_levelId = -1;
			m_scenarioId = -1;
			m_actorId = -1;
			m_partId = -1;
			m_enabled = true;
		};

		Realm m_realm; // 0x18 (24)
		AntRef m_scenarioAntRef; // 0x1C (28)
		s32 m_levelId; // 0x30 (48)
		s32 m_scenarioId; // 0x34 (52)
		s32 m_actorId; // 0x38 (56)
		s32 m_partId; // 0x3C (60)
		bool m_enabled; // 0x40 (64)
	}; // 0x48 (72)
}

