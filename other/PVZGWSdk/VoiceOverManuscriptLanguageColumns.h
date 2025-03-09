///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class AudioLanguage;
}

namespace fb {
	struct VoiceOverManuscriptLanguageColumns {
		VoiceOverManuscriptLanguageColumns() {
		};

		CtrRef<AudioLanguage> m_language; // 0x0 (0)
		String m_textColumn; // 0x8 (8)
		String m_subtitleOffsetColumn; // 0x10 (16)
	}; // 0x18 (24)
}

