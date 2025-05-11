///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/NuiSpeechPhraseHintMode.h>
#include <fb/NuiSpeechPhraseType.h>
#include <fb/String.h>

namespace fb {
	class NuiSpeechConfidencePolicySetup;
}

namespace fb {
	class NuiSpeechPhrase : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechPhrase"); }
		virtual ~NuiSpeechPhrase() override {}
		NuiSpeechPhrase() {
			m_numericId = 0;
			m_phraseType = NuiSpeechPhraseType::NuiSpeechPhraseType_InputAction;
			m_descriptionMode = NuiSpeechPhraseHintMode::NuiSpeechPhraseType_Always;
		};

		String m_tag; // 0x10 (16)
		s32 m_numericId; // 0x18 (24)
		NuiSpeechPhraseType m_phraseType; // 0x1C (28)
		String m_successMessage; // 0x20 (32)
		String m_description; // 0x28 (40)
		NuiSpeechPhraseHintMode m_descriptionMode; // 0x30 (48)
		CtrRef<NuiSpeechConfidencePolicySetup> m_confidencePolicy; // 0x38 (56)
	}; // 0x40 (64)
}

