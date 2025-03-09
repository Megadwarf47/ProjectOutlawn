///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class NuiSpeechCompiledGrammar;
}

namespace fb {
	class NuiSpeechLevelConfiguration : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechLevelConfiguration"); }
		virtual ~NuiSpeechLevelConfiguration() override {}
		NuiSpeechLevelConfiguration() {
		};

		RefArray<NuiSpeechCompiledGrammar> m_compiledGrammars; // 0x18 (24)
	}; // 0x20 (32)
}

