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
	class CrossfaderNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CrossfaderNodeData"); }
		virtual ~CrossfaderNodeData() override {}
		CrossfaderNodeData() {
		};

		AudioGraphNodePort m_in1; // 0x10 (16)
		AudioGraphNodePort m_in2; // 0x18 (24)
		AudioGraphNodePort m_ctrl; // 0x20 (32)
		AudioGraphNodePort m_out; // 0x28 (40)
		SoundGraphPluginRef m_plugin1; // 0x30 (48)
		SoundGraphPluginRef m_plugin2; // 0x33 (51)
	}; // 0x38 (56)
}

