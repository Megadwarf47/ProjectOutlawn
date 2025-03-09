///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/CtrRef.h>
#include <fb/DivisibleLoopPlayerPlugins.h>

namespace fb {
	class SoundWaveAsset;
}

namespace fb {
	class DivisibleLoopPlayerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DivisibleLoopPlayerNodeData"); }
		virtual ~DivisibleLoopPlayerNodeData() override {}
		DivisibleLoopPlayerNodeData() {
			m_crossFadeLength = 0.5f;
			m_startAtRandomPosition = true;
		};

		AudioGraphNodePort m_start; // 0x10 (16)
		AudioGraphNodePort m_stop; // 0x18 (24)
		AudioGraphNodePort m_amplitude; // 0x20 (32)
		AudioGraphNodePort m_freezeSegment; // 0x28 (40)
		AudioGraphNodePort m_output; // 0x30 (48)
		CtrRef<SoundWaveAsset> m_wave; // 0x38 (56)
		AudioGraphNodePort m_externalWave; // 0x40 (64)
		Array<DivisibleLoopPlayerPlugins> m_plugins; // 0x48 (72)
		float m_crossFadeLength; // 0x50 (80)
		bool m_startAtRandomPosition; // 0x54 (84)
	}; // 0x58 (88)
}

