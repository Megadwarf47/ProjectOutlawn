///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LanguageFormat.h>
#include <fb/String.h>

namespace fb {
	struct FontCollectionLookupEntry {
		FontCollectionLookupEntry() {
			m_language = LanguageFormat::LanguageFormat_English;
		};

		String m_collectionBasePath; // 0x0 (0)
		LanguageFormat m_language; // 0x8 (8)
	}; // 0x10 (16)
}

