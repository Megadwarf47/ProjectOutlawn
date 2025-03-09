///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	struct UIAudioEventMapping {
		UIAudioEventMapping() {
		};

		String m_eventName; // 0x0 (0)
		CtrRef<SoundAsset> m_soundAsset; // 0x8 (8)
	}; // 0x10 (16)
}

