///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SoundWaveVariationSegment {
		SoundWaveVariationSegment() {
			m_samplesOffset = 0;
			m_seekTableOffset = 0;
			m_segmentLength = 0.f;
		};

		u32 m_samplesOffset; // 0x0 (0)
		u32 m_seekTableOffset; // 0x4 (4)
		float m_segmentLength; // 0x8 (8)
	}; // 0xC (12)
}

