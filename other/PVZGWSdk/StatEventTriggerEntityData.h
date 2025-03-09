///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/StatEvent.h>
#include <fb/StatEventCast.h>
#include <fb/String.h>

namespace fb {
	class StatEventTriggerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatEventTriggerEntityData"); }
		virtual ~StatEventTriggerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		StatEventTriggerEntityData() {
			m_statEvent = StatEvent::StatEvent_Invalid;
			m_value = 0.f;
			m_sendTo = StatEventCast::SendToSingle;
		};

		StatEvent m_statEvent; // 0x18 (24)
		String m_miscParamX; // 0x20 (32)
		String m_miscParamY; // 0x28 (40)
		float m_value; // 0x30 (48)
		StatEventCast m_sendTo; // 0x34 (52)
	}; // 0x38 (56)
}

