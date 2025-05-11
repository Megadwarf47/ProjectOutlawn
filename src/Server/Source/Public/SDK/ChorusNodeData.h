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
	class ChorusNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ChorusNodeData"); }
		virtual ~ChorusNodeData() override {}
		ChorusNodeData() {
			m_maxDelay = 0.1f;
			m_maxModulationDepth = 0.1f;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		float m_maxDelay; // 0x20 (32)
		float m_maxModulationDepth; // 0x24 (36)
		AudioGraphNodePort m_tapCount; // 0x28 (40)
		AudioGraphNodePort m_delayTime; // 0x30 (48)
		AudioGraphNodePort m_modulationDepth; // 0x38 (56)
		AudioGraphNodePort m_modulationFrequency; // 0x40 (64)
		SoundGraphPluginRef m_plugin; // 0x48 (72)
	}; // 0x50 (80)
}

