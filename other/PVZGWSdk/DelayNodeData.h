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
	class DelayNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DelayNodeData"); }
		virtual ~DelayNodeData() override {}
		DelayNodeData() {
			m_maxDelayTime = 0.f;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_delayTime; // 0x18 (24)
		AudioGraphNodePort m_feedback; // 0x20 (32)
		AudioGraphNodePort m_out; // 0x28 (40)
		float m_maxDelayTime; // 0x30 (48)
		SoundGraphPluginRef m_plugin; // 0x34 (52)
	}; // 0x38 (56)
}

