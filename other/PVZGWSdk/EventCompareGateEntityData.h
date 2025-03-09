///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/EventCompareGateType.h>
#include <fb/Realm.h>

namespace fb {
	class EventCompareGateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventCompareGateEntityData"); }
		virtual ~EventCompareGateEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EventCompareGateEntityData() {
			m_value = 0;
			m_compareType = EventCompareGateType::EventCompareGate_Equals;
			m_realm = Realm::Realm_Server;
		};

		s32 m_value; // 0x18 (24)
		EventCompareGateType m_compareType; // 0x1C (28)
		Realm m_realm; // 0x20 (32)
	}; // 0x28 (40)
}

