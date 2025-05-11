///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/Types.h>
#include <fb/VoiceOverConversationInterruptMode.h>
#include <fb/VoiceOverConversationQueueMode.h>

namespace fb {
	class VoiceOverDialogGroup;
	class VoiceOverDialogTrack;
	class VoiceOverPronunciation;
}

namespace fb {
	struct VoiceOverConversationInfo {
		VoiceOverConversationInfo() {
			m_interruptMode = VoiceOverConversationInterruptMode::VoiceOverConversationInterruptMode_Allow;
			m_priority = 0;
			m_queueMode = VoiceOverConversationQueueMode::VoiceOverConversationQueueMode_Never;
			m_relevancy = 10.f;
			m_lastSequenceIndex = 0;
		};

		RefArray<VoiceOverDialogGroup> m_groups; // 0x0 (0)
		RefArray<VoiceOverDialogTrack> m_tracks; // 0x8 (8)
		RefArray<VoiceOverPronunciation> m_pronunciations; // 0x10 (16)
		VoiceOverConversationInterruptMode m_interruptMode; // 0x18 (24)
		s32 m_priority; // 0x1C (28)
		VoiceOverConversationQueueMode m_queueMode; // 0x20 (32)
		float m_relevancy; // 0x24 (36)
		u8 m_lastSequenceIndex; // 0x28 (40)
	}; // 0x30 (48)
}

