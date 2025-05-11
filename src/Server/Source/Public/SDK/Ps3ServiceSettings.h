///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Ps3ServiceId.h>
#include <fb/String.h>

namespace fb {
	struct Ps3ServiceSettings {
		Ps3ServiceSettings() {
		};

		String m_region; // 0x0 (0)
		String m_productCode; // 0x8 (8)
		String m_primaryProductCode; // 0x10 (16)
		Ps3ServiceId m_ticketingService; // 0x18 (24)
	}; // 0x28 (40)
}

