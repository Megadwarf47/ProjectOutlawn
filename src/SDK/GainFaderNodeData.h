///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/GainFaderFadeType.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class GainFaderNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GainFaderNodeData"); }
		virtual ~GainFaderNodeData() override {}
		GainFaderNodeData() {
			m_fadeType = GainFaderFadeType::GainFaderFadeType_LinearAmplitude;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_start; // 0x18 (24)
		AudioGraphNodePort m_startTime; // 0x20 (32)
		AudioGraphNodePort m_fadeTime; // 0x28 (40)
		AudioGraphNodePort m_amplitude; // 0x30 (48)
		AudioGraphNodePort m_out; // 0x38 (56)
		GainFaderFadeType m_fadeType; // 0x40 (64)
		SoundGraphPluginRef m_plugin; // 0x44 (68)
	}; // 0x48 (72)
}

