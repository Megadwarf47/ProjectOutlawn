///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Dialect.h>
#include <fb/LanguageFormat.h>
#include <fb/String.h>

namespace fb {
	class NuiSpeechDialect : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechDialect"); }
		virtual ~NuiSpeechDialect() override {}
		NuiSpeechDialect() {
			m_dialect = Dialect::Dialect_DE;
			m_language = LanguageFormat::LanguageFormat_English;
		};

		Dialect m_dialect; // 0x10 (16)
		String m_tag; // 0x18 (24)
		String m_name; // 0x20 (32)
		LanguageFormat m_language; // 0x28 (40)
	}; // 0x30 (48)
}

