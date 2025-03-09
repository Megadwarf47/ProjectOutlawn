///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/SoundGraphPluginConnectionParam.h>
#include <fb/SoundGraphPluginConnectionType.h>
#include <fb/Types.h>

namespace fb {
	class SoundBusData;
}

namespace fb {
	struct SoundGraphPluginConnection {
		SoundGraphPluginConnection() {
			m_connectionType = SoundGraphPluginConnectionType::SoundGraphPluginConnectionType_Unconnected;
			m_voiceIndex = 0;
			m_pluginIndex = 0;
			m_signalIndex = 0;
		};

		SoundGraphPluginConnectionType m_connectionType; // 0x0 (0)
		CtrRef<SoundBusData> m_bus; // 0x8 (8)
		Array<SoundGraphPluginConnectionParam> m_parameters; // 0x10 (16)
		u8 m_voiceIndex; // 0x18 (24)
		u8 m_pluginIndex; // 0x19 (25)
		u8 m_signalIndex; // 0x1A (26)
	}; // 0x20 (32)
}

