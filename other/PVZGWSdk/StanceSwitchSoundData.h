///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	struct StanceSwitchSoundData {
		StanceSwitchSoundData() {
		};

		CtrRef<SoundAsset> m_stanceSwitchSound; // 0x0 (0)
		Array<s32> m_validStances; // 0x8 (8)
	}; // 0x10 (16)
}

