///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>

namespace fb {
	class MixerValueNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerValueNodeData"); }
		virtual ~MixerValueNodeData() override {}
		MixerValueNodeData() {
			m_defaultValue = 0.f;
		};

		AudioGraphNodePort m_out; // 0x10 (16)
		float m_defaultValue; // 0x18 (24)
	}; // 0x20 (32)
}

