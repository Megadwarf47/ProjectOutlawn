///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class AudioLanguage;
}

namespace fb {
	struct SoundWaveLocalizationInfo {
		SoundWaveLocalizationInfo() {
			m_firstVariationIndex = 0;
			m_variationCount = 0;
		};

		CtrRef<AudioLanguage> m_language; // 0x0 (0)
		u16 m_firstVariationIndex; // 0x8 (8)
		u16 m_variationCount; // 0xA (10)
	}; // 0x10 (16)
}

