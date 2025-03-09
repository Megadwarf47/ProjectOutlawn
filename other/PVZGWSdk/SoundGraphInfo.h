///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SoundGraphLinkedPluginAttribute.h>
#include <fb/SoundGraphPluginConnection.h>
#include <fb/SoundGraphPluginConstructParam.h>
#include <fb/SoundGraphVoiceInfo.h>
#include <fb/Types.h>

namespace fb {
	struct SoundGraphInfo {
		SoundGraphInfo() {
			m_pluginsParamCount = 0;
			m_pluginCount = 0;
		};

		Array<SoundGraphVoiceInfo> m_voices; // 0x0 (0)
		Array<SoundGraphLinkedPluginAttribute> m_linkedPluginAttributes; // 0x8 (8)
		Array<SoundGraphPluginConnection> m_connections; // 0x10 (16)
		Array<SoundGraphPluginConstructParam> m_constructParams; // 0x18 (24)
		u32 m_pluginsParamCount; // 0x20 (32)
		u32 m_pluginCount; // 0x24 (36)
	}; // 0x28 (40)
}

