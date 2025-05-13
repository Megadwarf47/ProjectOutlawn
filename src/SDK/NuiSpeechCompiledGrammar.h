///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/Dialect.h>
#include <fb/RefArray.h>

namespace fb {
	class NuiSpeechGrammarBundleAsset;
	class NuiSpeechPhraseVariation;
}

namespace fb {
	class NuiSpeechCompiledGrammar : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechCompiledGrammar"); }
		virtual ~NuiSpeechCompiledGrammar() override {}
		NuiSpeechCompiledGrammar() {
			m_dialect = Dialect::Dialect_DE;
			m_size = 0;
		};

		CtrRef<NuiSpeechGrammarBundleAsset> m_grammarBundle; // 0x18 (24)
		Dialect m_dialect; // 0x20 (32)
		RefArray<NuiSpeechPhraseVariation> m_phraseVariations; // 0x28 (40)
		Array<u8> m_data; // 0x30 (48)
		u32 m_size; // 0x38 (56)
	}; // 0x40 (64)
}

