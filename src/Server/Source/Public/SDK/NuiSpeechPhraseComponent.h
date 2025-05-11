///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class NuiSpeechPhraseComponent : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechPhraseComponent"); }
		virtual ~NuiSpeechPhraseComponent() override {}
		NuiSpeechPhraseComponent() {
		};

		String m_tag; // 0x10 (16)
	}; // 0x18 (24)
}

