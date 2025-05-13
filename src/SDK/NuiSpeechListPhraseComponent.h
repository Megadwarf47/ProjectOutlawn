///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/NuiSpeechPhraseComponent.h>
#include <fb/RefArray.h>

namespace fb {
	class NuiSpeechListElement;
}

namespace fb {
	class NuiSpeechListPhraseComponent : public NuiSpeechPhraseComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechListPhraseComponent"); }
		virtual ~NuiSpeechListPhraseComponent() override {}
		NuiSpeechListPhraseComponent() {
		};

		RefArray<NuiSpeechListElement> m_list; // 0x18 (24)
	}; // 0x20 (32)
}

