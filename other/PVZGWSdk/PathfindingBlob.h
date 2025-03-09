///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Types.h>

namespace fb {
	struct PathfindingBlob {
		PathfindingBlob() {
			m_blobSize = 0;
		};

		Guid m_blobId; // 0x0 (0)
		u32 m_blobSize; // 0x10 (16)
		Array<u32> m_chunkSizes; // 0x18 (24)
	}; // 0x20 (32)
}

