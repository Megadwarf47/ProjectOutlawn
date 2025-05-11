///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/VoiceOverDialogTakeBehavior.h>
#include <fb/VoiceOverDialogTakeMapping.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class AudioGraphNodeData;
	class VoiceOverConversationQueueGroup;
	class VoiceOverDialogClip;
}

namespace fb {
	class VoiceOverDialogTrack : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverDialogTrack"); }
		virtual ~VoiceOverDialogTrack() override {}
		VoiceOverDialogTrack() {
			m_takeSwitching = VoiceOverDialogTakeBehavior::VoiceOverDialogTakeBehavior_Start;
			m_takeSwitchingOnResume = false;
			m_parentTrackIndex = 0;
			m_groupIndex = 0;
		};

		VoiceOverValueConnection m_source; // 0x10 (16)
		VoiceOverValueConnection m_takeControl; // 0x20 (32)
		Array<VoiceOverDialogTakeMapping> m_takeIndexMapping; // 0x30 (48)
		VoiceOverDialogTakeBehavior m_takeSwitching; // 0x38 (56)
		CtrRef<AudioGraphNodeData> m_output; // 0x40 (64)
		CtrRef<AudioGraphNodeData> m_samplerNode; // 0x48 (72)
		CtrRef<VoiceOverConversationQueueGroup> m_queueGroup; // 0x50 (80)
		RefArray<VoiceOverDialogClip> m_clips; // 0x58 (88)
		bool m_takeSwitchingOnResume; // 0x60 (96)
		u8 m_parentTrackIndex; // 0x61 (97)
		u8 m_groupIndex; // 0x62 (98)
	}; // 0x68 (104)
}

