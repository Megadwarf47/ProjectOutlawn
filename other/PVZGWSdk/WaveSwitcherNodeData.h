///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/RefArray.h>

namespace fb {
	class SoundWaveAsset;
}

namespace fb {
	class WaveSwitcherNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveSwitcherNodeData"); }
		virtual ~WaveSwitcherNodeData() override {}
		WaveSwitcherNodeData() {
			m_defaultIndex = 0.f;
			m_isRandom = false;
			m_randomStartIndex = false;
		};

		AudioGraphNodePort m_index; // 0x10 (16)
		AudioGraphNodePort m_advance; // 0x18 (24)
		AudioGraphNodePort m_wave; // 0x20 (32)
		AudioGraphNodePort m_indexChanged; // 0x28 (40)
		RefArray<SoundWaveAsset> m_waves; // 0x30 (48)
		float m_defaultIndex; // 0x38 (56)
		bool m_isRandom; // 0x3C (60)
		bool m_randomStartIndex; // 0x3D (61)
	}; // 0x40 (64)
}

