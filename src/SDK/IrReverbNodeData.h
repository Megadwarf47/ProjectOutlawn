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
	class IrReverbNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IrReverbNodeData"); }
		virtual ~IrReverbNodeData() override {}
		IrReverbNodeData() {
			m_maxReverbLength = 0.f;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		AudioGraphNodePort m_reverb0; // 0x20 (32)
		AudioGraphNodePort m_amplitude0; // 0x28 (40)
		AudioGraphNodePort m_reverb1; // 0x30 (48)
		AudioGraphNodePort m_amplitude1; // 0x38 (56)
		float m_maxReverbLength; // 0x40 (64)
		SoundGraphPluginRef m_reverbPlugin; // 0x44 (68)
	}; // 0x48 (72)
}

