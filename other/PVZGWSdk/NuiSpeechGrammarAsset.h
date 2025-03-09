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
	class NuiSpeechConfidencePolicySetup;
	class NuiSpeechGrammarBundleAsset;
	class NuiSpeechPhrase;
}

namespace fb {
	class NuiSpeechGrammarAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechGrammarAsset"); }
		virtual ~NuiSpeechGrammarAsset() override {}
		NuiSpeechGrammarAsset() {
		};

		RefArray<NuiSpeechPhrase> m_phrases; // 0x18 (24)
		CtrRef<NuiSpeechConfidencePolicySetup> m_confidencePolicy; // 0x20 (32)
		CtrRef<NuiSpeechGrammarBundleAsset> m_grammarBundle; // 0x28 (40)
	}; // 0x30 (48)
}

