///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SoundDataChunk {
		SoundDataChunk() {
			m_chunkSize = 0;
		};

		Guid m_chunkId; // 0x0 (0)
		u32 m_chunkSize; // 0x10 (16)
	}; // 0x14 (20)
}

