///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class AudioLanguage;
	class VoiceOverConversationQueueGroup;
	class VoiceOverGlobalConstantValue;
	class VoiceOverInterval;
	class VoiceOverLabel;
	class VoiceOverObject;
	class VoiceOverPronunciation;
}

namespace fb {
	class VoiceOverSystemAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverSystemAsset"); }
		virtual ~VoiceOverSystemAsset() override {}
		VoiceOverSystemAsset() {
		};

		RefArray<VoiceOverInterval> m_intervals; // 0x18 (24)
		RefArray<VoiceOverLabel> m_labels; // 0x20 (32)
		RefArray<VoiceOverObject> m_types; // 0x28 (40)
		RefArray<VoiceOverObject> m_objects; // 0x30 (48)
		RefArray<VoiceOverGlobalConstantValue> m_constants; // 0x38 (56)
		CtrRef<AudioLanguage> m_masterLanguage; // 0x40 (64)
		CtrRef<VoiceOverPronunciation> m_defaultPronunciation; // 0x48 (72)
		RefArray<VoiceOverPronunciation> m_pronunciations; // 0x50 (80)
		RefArray<VoiceOverConversationQueueGroup> m_queueGroups; // 0x58 (88)
		CtrRef<VoiceOverConversationQueueGroup> m_defaultPositionedQueueGroup; // 0x60 (96)
		CtrRef<VoiceOverConversationQueueGroup> m_defaultUnpositionedQueueGroup; // 0x68 (104)
	}; // 0x70 (112)
}

