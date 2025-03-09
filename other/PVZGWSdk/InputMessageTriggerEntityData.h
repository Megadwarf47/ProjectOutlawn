///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/ScreenActionInputEventType.h>

namespace fb {
	class InputMessageTriggerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputMessageTriggerEntityData"); }
		virtual ~InputMessageTriggerEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		InputMessageTriggerEntityData() {
			m_realm = Realm::Realm_Client;
			m_eventType = ScreenActionInputEventType::ScreenActionInputEventType_RuleRecognition;
			m_enableAtStart = false;
		};

		Realm m_realm; // 0x18 (24)
		ScreenActionInputEventType m_eventType; // 0x1C (28)
		bool m_enableAtStart; // 0x20 (32)
	}; // 0x28 (40)
}

