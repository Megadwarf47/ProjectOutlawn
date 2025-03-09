///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/NuiSpeechPhraseComponent.h>

namespace fb {
	class NuiSpeechSquadNames;
}

namespace fb {
	class NuiSpeechSquadNameComponent : public NuiSpeechPhraseComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechSquadNameComponent"); }
		virtual ~NuiSpeechSquadNameComponent() override {}
		NuiSpeechSquadNameComponent() {
		};

		CtrRef<NuiSpeechSquadNames> m_squadNames; // 0x18 (24)
	}; // 0x20 (32)
}

