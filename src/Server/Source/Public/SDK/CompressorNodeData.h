///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/CompressorChannelMode.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class CompressorNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompressorNodeData"); }
		virtual ~CompressorNodeData() override {}
		CompressorNodeData() {
			m_channelMode = CompressorChannelMode::CompressorChannelMode_Grouped;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_sidechain; // 0x18 (24)
		AudioGraphNodePort m_threshold; // 0x20 (32)
		AudioGraphNodePort m_ratio; // 0x28 (40)
		AudioGraphNodePort m_attackTime; // 0x30 (48)
		AudioGraphNodePort m_releaseTime; // 0x38 (56)
		AudioGraphNodePort m_useSidechain; // 0x40 (64)
		AudioGraphNodePort m_out; // 0x48 (72)
		CompressorChannelMode m_channelMode; // 0x50 (80)
		SoundGraphPluginRef m_plugin; // 0x54 (84)
	}; // 0x58 (88)
}

