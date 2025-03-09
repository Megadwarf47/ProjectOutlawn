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
#include <fb/LoopType.h>
#include <fb/SamplerNodeVersion.h>
#include <fb/SamplerPlugins.h>

namespace fb {
	class OutputNodeData;
	class SoundWaveAsset;
}

namespace fb {
	class SamplerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SamplerNodeData"); }
		virtual ~SamplerNodeData() override {}
		SamplerNodeData() {
			m_loop = LoopType::LtNone;
			m_version = SamplerNodeVersion::SamplerNodeVersion_2010_2;
		};

		AudioGraphNodePort m_externalWave; // 0x10 (16)
		AudioGraphNodePort m_variation; // 0x18 (24)
		AudioGraphNodePort m_offset; // 0x20 (32)
		AudioGraphNodePort m_delay; // 0x28 (40)
		AudioGraphNodePort m_pitch; // 0x30 (48)
		AudioGraphNodePort m_amplitude; // 0x38 (56)
		AudioGraphNodePort m_enableStep; // 0x40 (64)
		AudioGraphNodePort m_shuffleSegments; // 0x48 (72)
		AudioGraphNodePort m_buffer; // 0x50 (80)
		AudioGraphNodePort m_trigger; // 0x58 (88)
		AudioGraphNodePort m_release; // 0x60 (96)
		AudioGraphNodePort m_step; // 0x68 (104)
		AudioGraphNodePort m_output; // 0x70 (112)
		AudioGraphNodePort m_finished; // 0x78 (120)
		AudioGraphNodePort m_buffered; // 0x80 (128)
		AudioGraphNodePort m_position; // 0x88 (136)
		CtrRef<SoundWaveAsset> m_wave; // 0x90 (144)
		LoopType m_loop; // 0x98 (152)
		Array<SamplerPlugins> m_plugins; // 0xA0 (160)
		CtrRef<OutputNodeData> m_pitchSource; // 0xA8 (168)
		SamplerNodeVersion m_version; // 0xB0 (176)
	}; // 0xB8 (184)
}

