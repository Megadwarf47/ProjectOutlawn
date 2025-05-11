///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>
#include <fb/VoiceOverPronunciationFallback.h>

namespace fb {
	class AudioLanguage;
}

namespace fb {
	class VoiceOverPronunciation : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverPronunciation"); }
		virtual ~VoiceOverPronunciation() override {}
		VoiceOverPronunciation() {
			m_secondaryFallback = VoiceOverPronunciationFallback::VoiceOverPronunciationFallback_Master;
		};

		String m_name; // 0x10 (16)
		CtrRef<AudioLanguage> m_primaryLanguage; // 0x18 (24)
		CtrRef<AudioLanguage> m_secondaryLanguage; // 0x20 (32)
		VoiceOverPronunciationFallback m_secondaryFallback; // 0x28 (40)
	}; // 0x30 (48)
}

