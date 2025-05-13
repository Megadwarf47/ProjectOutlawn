///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/String.h>

namespace fb {
	class TelemetryTriggerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TelemetryTriggerEntityData"); }
		virtual ~TelemetryTriggerEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TelemetryTriggerEntityData() {
			m_realm = Realm::Realm_Server;
			m_inputFloatValue = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		String m_value; // 0x20 (32)
		float m_inputFloatValue; // 0x28 (40)
	}; // 0x30 (48)
}

