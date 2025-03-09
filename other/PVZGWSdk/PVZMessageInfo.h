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
	struct PVZMessageInfo {
		PVZMessageInfo() {
			m_messageQueueSize = 1;
			m_normalMessageTime = 5.f;
			m_shortMessageTime = 1.f;
		};

		String m_rowTypeName; // 0x0 (0)
		u32 m_messageQueueSize; // 0x8 (8)
		float m_normalMessageTime; // 0xC (12)
		float m_shortMessageTime; // 0x10 (16)
	}; // 0x18 (24)
}

