///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/CtrRef.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class OutputNodeData;
}

namespace fb {
	class DialogSamplerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DialogSamplerNodeData"); }
		virtual ~DialogSamplerNodeData() override {}
		DialogSamplerNodeData() {
			m_tailLength = 0.f;
		};

		AudioGraphNodePort m_pitch; // 0x10 (16)
		AudioGraphNodePort m_amplitude; // 0x18 (24)
		AudioGraphNodePort m_continue; // 0x20 (32)
		AudioGraphNodePort m_output; // 0x28 (40)
		AudioGraphNodePort m_triggered; // 0x30 (48)
		AudioGraphNodePort m_finished; // 0x38 (56)
		float m_tailLength; // 0x40 (64)
		CtrRef<OutputNodeData> m_pitchSource; // 0x48 (72)
		SoundGraphPluginRef m_sndPlayerPlugin; // 0x50 (80)
		SoundGraphPluginRef m_resamplePlugin; // 0x53 (83)
		SoundGraphPluginRef m_pausePlugin; // 0x56 (86)
		SoundGraphPluginRef m_gainPlugin; // 0x59 (89)
	}; // 0x60 (96)
}

