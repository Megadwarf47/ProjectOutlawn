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
	class VibratoNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VibratoNodeData"); }
		virtual ~VibratoNodeData() override {}
		VibratoNodeData() {
			m_maxModulationDepth = 0.1f;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		float m_maxModulationDepth; // 0x20 (32)
		AudioGraphNodePort m_modulationDepth; // 0x24 (36)
		AudioGraphNodePort m_modulationFrequency; // 0x2C (44)
		SoundGraphPluginRef m_plugin; // 0x34 (52)
	}; // 0x38 (56)
}

