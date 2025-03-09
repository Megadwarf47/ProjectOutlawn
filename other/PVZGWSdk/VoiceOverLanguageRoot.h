///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class AudioLanguage;
}

namespace fb {
	class VoiceOverLanguageRoot : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLanguageRoot"); }
		virtual ~VoiceOverLanguageRoot() override {}
		VoiceOverLanguageRoot() {
		};

		CtrRef<AudioLanguage> m_language; // 0x10 (16)
		String m_path; // 0x18 (24)
	}; // 0x20 (32)
}

