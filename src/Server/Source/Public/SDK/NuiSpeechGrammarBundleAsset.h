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
	class NuiSpeechGrammarAsset;
}

namespace fb {
	class NuiSpeechGrammarBundleAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechGrammarBundleAsset"); }
		virtual ~NuiSpeechGrammarBundleAsset() override {}
		NuiSpeechGrammarBundleAsset() {
		};

		CtrRef<NuiSpeechConfidencePolicySetup> m_confidencePolicy; // 0x18 (24)
		RefArray<NuiSpeechGrammarAsset> m_grammars; // 0x20 (32)
	}; // 0x28 (40)
}

