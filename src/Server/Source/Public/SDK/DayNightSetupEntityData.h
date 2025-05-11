///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DayNightState.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class DayNightSetupEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DayNightSetupEntityData"); }
		virtual ~DayNightSetupEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DayNightSetupEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_initialState = DayNightState::DayNightState_Day;
			m_timeInDay = 180.f;
			m_dayToNightTransitionTime = 30.f;
			m_timeInNight = 180.f;
			m_nightToDayTransitionTime = 30.f;
		};

		Realm m_realm; // 0x18 (24)
		DayNightState m_initialState; // 0x1C (28)
		float m_timeInDay; // 0x20 (32)
		float m_dayToNightTransitionTime; // 0x24 (36)
		float m_timeInNight; // 0x28 (40)
		float m_nightToDayTransitionTime; // 0x2C (44)
	}; // 0x30 (48)
}

