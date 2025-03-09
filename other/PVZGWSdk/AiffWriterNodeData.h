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
#include <fb/String.h>

namespace fb {
	class AiffWriterNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AiffWriterNodeData"); }
		virtual ~AiffWriterNodeData() override {}
		AiffWriterNodeData() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_start; // 0x18 (24)
		AudioGraphNodePort m_stop; // 0x20 (32)
		String m_fileName; // 0x28 (40)
		SoundGraphPluginRef m_plugin; // 0x30 (48)
	}; // 0x38 (56)
}

