///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/LanguageFormat.h>
#include <fb/String.h>

namespace fb {
	class AudioLanguage : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioLanguage"); }
		virtual ~AudioLanguage() override {}
		AudioLanguage() {
			m_languageMapping = LanguageFormat::LanguageFormat_English;
		};

		String m_name; // 0x10 (16)
		LanguageFormat m_languageMapping; // 0x18 (24)
	}; // 0x20 (32)
}

