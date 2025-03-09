///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class VoiceOverEvent;
	class VoiceOverNamedValue;
}

namespace fb {
	class VoiceOverEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverEventEntityData"); }
		virtual ~VoiceOverEventEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VoiceOverEventEntityData() {
			m_triggerDelay = 0.f;
			m_finishedDelay = 0.f;
			m_runOnce = false;
		};

		CtrRef<VoiceOverEvent> m_voEvent; // 0x18 (24)
		CtrRef<VoiceOverNamedValue> m_eventPlayer; // 0x20 (32)
		CtrRef<VoiceOverNamedValue> m_extraEventPlayer; // 0x28 (40)
		float m_triggerDelay; // 0x30 (48)
		float m_finishedDelay; // 0x34 (52)
		bool m_runOnce; // 0x38 (56)
	}; // 0x40 (64)
}

