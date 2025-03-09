///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/NuiSpeechPhrase.h>
#include <fb/RefArray.h>

namespace fb {
	class NuiSpeechPhraseComponent;
}

namespace fb {
	class NuiSpeechComplexPhrase : public NuiSpeechPhrase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechComplexPhrase"); }
		virtual ~NuiSpeechComplexPhrase() override {}
		NuiSpeechComplexPhrase() {
		};

		RefArray<NuiSpeechPhraseComponent> m_phraseComponents; // 0x40 (64)
	}; // 0x48 (72)
}

