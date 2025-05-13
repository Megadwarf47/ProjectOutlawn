///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SoundGraphPluginRef {
		SoundGraphPluginRef() {
			m_isValid = false;
			m_voiceIndex = 0;
			m_pluginIndex = 0;
		};

		bool m_isValid; // 0x0 (0)
		u8 m_voiceIndex; // 0x1 (1)
		u8 m_pluginIndex; // 0x2 (2)
	}; // 0x3 (3)
}

