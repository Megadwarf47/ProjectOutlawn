///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SoundGraphPluginRef.h>

namespace fb {
	struct MusicPlayerPlugins {
		MusicPlayerPlugins() {
		};

		SoundGraphPluginRef m_sndPlayer; // 0x0 (0)
		SoundGraphPluginRef m_rechannel; // 0x3 (3)
		SoundGraphPluginRef m_resample; // 0x6 (6)
		SoundGraphPluginRef m_pause; // 0x9 (9)
		SoundGraphPluginRef m_gain; // 0xC (12)
	}; // 0xF (15)
}

