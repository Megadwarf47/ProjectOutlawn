///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct FreeStreamingChunksLoadInfo {
		FreeStreamingChunksLoadInfo() {
			m_numPartitions = 0;
			m_isLocalized = false;
			m_isOptional = false;
		};

		String m_name; // 0x0 (0)
		s32 m_numPartitions; // 0x8 (8)
		bool m_isLocalized; // 0xC (12)
		bool m_isOptional; // 0xD (13)
	}; // 0x10 (16)
}

