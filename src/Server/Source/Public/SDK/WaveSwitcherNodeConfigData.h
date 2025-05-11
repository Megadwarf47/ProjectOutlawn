///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeConfigData.h>
#include <fb/RefArray.h>

namespace fb {
	class SoundWaveAsset;
}

namespace fb {
	class WaveSwitcherNodeConfigData : public AudioGraphNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveSwitcherNodeConfigData"); }
		virtual ~WaveSwitcherNodeConfigData() override {}
		WaveSwitcherNodeConfigData() {
		};

		RefArray<SoundWaveAsset> m_waves; // 0x18 (24)
	}; // 0x20 (32)
}

