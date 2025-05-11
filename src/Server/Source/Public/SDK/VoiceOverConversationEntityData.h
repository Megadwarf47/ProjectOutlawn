///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/VoiceOverConversationEntityTrackInfo.h>
#include <fb/VoiceOverConversationInfo.h>

namespace fb {
	class VoiceOverConversationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConversationEntityData"); }
		virtual ~VoiceOverConversationEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VoiceOverConversationEntityData() {
			m_triggerDelay = 0.f;
			m_finishedDelay = 0.f;
			m_pronunciationIndex = 0;
			m_runOnce = false;
			m_needsTriggerResult = false;
		};

		VoiceOverConversationInfo m_conversation; // 0x18 (24)
		Array<VoiceOverConversationEntityTrackInfo> m_trackInfos; // 0x48 (72)
		float m_triggerDelay; // 0x50 (80)
		float m_finishedDelay; // 0x54 (84)
		s32 m_pronunciationIndex; // 0x58 (88)
		bool m_runOnce; // 0x5C (92)
		bool m_needsTriggerResult; // 0x5D (93)
	}; // 0x60 (96)
}

