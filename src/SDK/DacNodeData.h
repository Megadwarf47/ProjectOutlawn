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
	class DacNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DacNodeData"); }
		virtual ~DacNodeData() override {}
		DacNodeData() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_speakerCount; // 0x18 (24)
		SoundGraphPluginRef m_delayPlugin; // 0x20 (32)
		SoundGraphPluginRef m_vuPlugin; // 0x23 (35)
		SoundGraphPluginRef m_gainPlugin; // 0x26 (38)
		SoundGraphPluginRef m_dacPlugin; // 0x29 (41)
	}; // 0x30 (48)
}

