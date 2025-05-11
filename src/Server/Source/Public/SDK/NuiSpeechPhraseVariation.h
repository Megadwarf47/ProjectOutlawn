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
#include <fb/String.h>

namespace fb {
	class NuiSpeechPhrase;
}

namespace fb {
	class NuiSpeechPhraseVariation : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechPhraseVariation"); }
		virtual ~NuiSpeechPhraseVariation() override {}
		NuiSpeechPhraseVariation() {
			m_variationIndex = 0;
		};

		CtrRef<NuiSpeechPhrase> m_phrase; // 0x10 (16)
		s32 m_variationIndex; // 0x18 (24)
		String m_translation; // 0x20 (32)
		Array<String> m_pronunciations; // 0x28 (40)
	}; // 0x30 (48)
}

