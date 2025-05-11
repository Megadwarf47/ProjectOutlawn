///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SoundWaveRuntimeVariation {
		SoundWaveRuntimeVariation() {
			m_persistentDataSize = 0;
			m_firstSegmentIndex = 0;
			m_firstSubtitleIndex = 0;
			m_subtitleCount = 0;
			m_segmentCount = 0;
			m_chunkIndex = 0;
			m_firstLoopSegmentIndex = 0;
			m_lastLoopSegmentIndex = 0;
		};

		u32 m_persistentDataSize; // 0x0 (0)
		u16 m_firstSegmentIndex; // 0x4 (4)
		u8 m_firstSubtitleIndex; // 0x6 (6)
		u8 m_subtitleCount; // 0x7 (7)
		u8 m_segmentCount; // 0x8 (8)
		u8 m_chunkIndex; // 0x9 (9)
		u8 m_firstLoopSegmentIndex; // 0xA (10)
		u8 m_lastLoopSegmentIndex; // 0xB (11)
	}; // 0xC (12)
}

