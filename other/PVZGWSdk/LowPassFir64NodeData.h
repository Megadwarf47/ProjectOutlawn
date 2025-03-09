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
	class LowPassFir64NodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LowPassFir64NodeData"); }
		virtual ~LowPassFir64NodeData() override {}
		LowPassFir64NodeData() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_frequency; // 0x18 (24)
		AudioGraphNodePort m_out; // 0x20 (32)
		SoundGraphPluginRef m_plugin; // 0x28 (40)
	}; // 0x30 (48)
}

