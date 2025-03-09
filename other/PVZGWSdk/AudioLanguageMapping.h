///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class AudioLanguage;
}

namespace fb {
	struct AudioLanguageMapping {
		AudioLanguageMapping() {
		};

		CtrRef<AudioLanguage> m_source; // 0x0 (0)
		CtrRef<AudioLanguage> m_target; // 0x8 (8)
	}; // 0x10 (16)
}

