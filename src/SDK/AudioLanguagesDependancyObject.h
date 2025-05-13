///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class AudioLanguage;
}

namespace fb {
	class AudioLanguagesDependancyObject : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioLanguagesDependancyObject"); }
		virtual ~AudioLanguagesDependancyObject() override {}
		AudioLanguagesDependancyObject() {
		};

		RefArray<AudioLanguage> m_audioLanguages; // 0x10 (16)
	}; // 0x18 (24)
}

