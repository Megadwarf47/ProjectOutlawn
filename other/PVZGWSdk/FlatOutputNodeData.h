///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/CtrRef.h>
#include <fb/OutputNodeData.h>
#include <fb/OutputReverbMode.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class SoundBusData;
}

namespace fb {
	class FlatOutputNodeData : public OutputNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FlatOutputNodeData"); }
		virtual ~FlatOutputNodeData() override {}
		FlatOutputNodeData() {
			m_worldAngle = 0.f;
			m_angle = 0.f;
			m_reverbGain = -12.f;
			m_reverbMode = OutputReverbMode::OutputReverbMode_PostGain;
			m_isWorldAligned = false;
		};

		float m_worldAngle; // 0x80 (128)
		float m_angle; // 0x84 (132)
		AudioCurve m_reverbAttenuationCurve; // 0x88 (136)
		float m_reverbGain; // 0x98 (152)
		OutputReverbMode m_reverbMode; // 0x9C (156)
		CtrRef<SoundBusData> m_reverbSend; // 0xA0 (160)
		AudioGraphNodePort m_centerLevel; // 0xA8 (168)
		AudioGraphNodePort m_lfeLevel; // 0xB0 (176)
		bool m_isWorldAligned; // 0xB8 (184)
		SoundGraphPluginRef m_panPlugin; // 0xB9 (185)
		SoundGraphPluginRef m_reverbSendPlugin; // 0xBC (188)
	}; // 0xC0 (192)
}

