///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class PeakingIir2NodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PeakingIir2NodeData"); }
		virtual ~PeakingIir2NodeData() override {}
		PeakingIir2NodeData() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_frequency; // 0x18 (24)
		AudioGraphNodePort m_amplitude; // 0x20 (32)
		AudioGraphNodePort m_q; // 0x28 (40)
		AudioGraphNodePort m_out; // 0x30 (48)
		SoundGraphPluginRef m_plugin; // 0x38 (56)
	}; // 0x40 (64)
}

