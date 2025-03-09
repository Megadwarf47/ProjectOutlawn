///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SoundGraphPluginInfo {
		SoundGraphPluginInfo() {
			m_id = 0;
			m_enableAttributeReadMask = 0;
			m_connectionIndex = 0;
			m_outputChannelCount = 0;
			m_constructParamsIndex = 0;
			m_constructParamCount = 0;
		};

		u32 m_id; // 0x0 (0)
		u32 m_enableAttributeReadMask; // 0x4 (4)
		u8 m_connectionIndex; // 0x8 (8)
		u8 m_outputChannelCount; // 0x9 (9)
		u8 m_constructParamsIndex; // 0xA (10)
		u8 m_constructParamCount; // 0xB (11)
	}; // 0xC (12)
}

