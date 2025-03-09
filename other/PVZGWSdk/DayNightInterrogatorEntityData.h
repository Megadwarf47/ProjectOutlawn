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
	class DayNightInterrogatorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DayNightInterrogatorEntityData"); }
		virtual ~DayNightInterrogatorEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DayNightInterrogatorEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_becomingDayEventThreshold = 0.f;
			m_becomingNightEventThreshold = 1.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_becomingDayEventThreshold; // 0x1C (28)
		float m_becomingNightEventThreshold; // 0x20 (32)
	}; // 0x28 (40)
}

