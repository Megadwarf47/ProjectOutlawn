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
	class SoundWaveAsset;
}

namespace fb {
	struct MusicOverlayVariation {
		MusicOverlayVariation() {
			m_minimumTimeRemaining = 0.f;
		};

		float m_minimumTimeRemaining; // 0x0 (0)
		CtrRef<SoundWaveAsset> m_wave; // 0x8 (8)
	}; // 0x10 (16)
}

