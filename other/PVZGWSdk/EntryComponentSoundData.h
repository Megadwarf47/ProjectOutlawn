///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/StanceSwitchSoundData.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class EntryComponentSoundData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntryComponentSoundData"); }
		virtual ~EntryComponentSoundData() override {}
		EntryComponentSoundData() {
		};

		Array<StanceSwitchSoundData> m_stanceSounds; // 0x10 (16)
		CtrRef<SoundAsset> m_stanceSwitchSound; // 0x18 (24)
	}; // 0x20 (32)
}

